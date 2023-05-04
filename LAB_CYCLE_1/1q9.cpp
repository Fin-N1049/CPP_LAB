#include <iostream>
using namespace std;
class obj{
    int a;
    int static count;
public:
        obj(){
        }
        void setvalue ()
        {
           a=++count; 
        }
        void static showcount(){
            cout<<"number of objects created: "<<count<<endl;
        }
        void display ()
        {
            cout<<"object number : "<<a<<endl;
        }
};
int obj::count;

int main(){
    char option;
    do{
    int n;
    cout<<"enter the number of objects to be created  :";
    cin>>n;
    obj o[n];
    for(int i=0;i<n;i++)
    {
        o[i].setvalue();
        o[i].display();
    
    }
    obj::showcount();
    
    cout<<"do you want to add more object?(y/n)  :";
    cin>>option;
    }while(option=='y');
    
    return 0;
}
