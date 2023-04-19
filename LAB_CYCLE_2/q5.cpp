#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
   
    public:
    A(){
    }
    A(int x)
    {
        a=x;
          cout<<"!!!parameterized constructor of class A invoked!!!"<<endl;
    }
    void show_a()
    {
        cout<<"the value of a :"<<a<<endl;
    }
};
class B:virtual public A
{
    protected:
    float b;
    
    public:
    B(){
    }
    B(float y)
    {
        b=y;
          cout<<"!!!parameterized constructor of class B invoked!!!"<<endl;
    }
     void show_b()
    {
        cout<<"the value of b :"<<b<<endl;
    }
    
};
class C :virtual public A
{
    protected:
    float c;
   
    public:
    C(){
    }
    C(float w)
    {
        c=w;
  cout<<"!!!parameterized constructor of class C invoked!!!"<<endl;
    }
     void show_c()
    {
        cout<<"the value of c :"<<c<<endl;
    }
    
};
class D:public B,public C
{
    int d;
    public:
    D(){
    }
    D(int x,float y,float w,int z):B(y),C(w),A(x)
    {
        d= z;
        cout<<"!!!parameterized constructor of class D invoked!!!"<<endl;
    }
    void display()
    {
        show_a();
        show_b();
        show_c();
        show_d();
    }
     void show_d()
    {
        cout<<"the value of d :"<<d<<endl;
    }
};
 int main()
 {
     int a,d;
     float b,c;
    cout<<"enter the values for a :";
    cin>>a;
    cout<<endl<<"enter the values for b :";
    cin>>b;
    cout<<endl<<"enter the values for c :";
    cin>>c;
    cout<<endl<<"enter the values for d :";
    cin>>d;
    D ob1(a,b,c,d) ;
    ob1.display();
    
    return 0;
 }