#include <iostream>
using namespace std;
class class_2;
class class_1
{
  int v1;
  
  public:
    void get()
    {
        cout<<"enter the value of a : ";
        cin>>v1;
    }
    void display ()
       { cout<<"current value of data member in class_1 : "<<v1<<endl;
       }
    friend void swap (class_1 &a,class_2 &b);
    
    
};

class class_2
{
    int v2;
    
    public:
        void get()
        {
            cout<<"enter the value of b : ";
            cin>>v2;
        }
        void display ()
        {
        cout<<"current value of data member in class_2 : "<<v2<<endl;    
        }
        
        friend void swap (class_1 &a,class_2 &b);
    
};
void swap (class_1 &a,class_2 &b)
{
    int temp=0;
     temp=a.v1;
     a.v1= b.v2;
     b.v2=temp;
}
int main()
{
class_1 a;
class_2 b;
a.get();
b.get();
cout<<"before swapping"<<endl;
a.display();
b.display();
swap(a,b);
cout<<"after swapping"<<endl;
a.display();
b.display();

return 0;
}