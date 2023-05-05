#include<iostream>
#include<cstring>
using namespace std;
class person
{
    protected :
    string name;
    int idno;
    int salary;
    int fee;
   
    public:
    virtual void input ()
    {
    }
    virtual void display()
    {
    }
};
class student:public person
{
    void input()
    {
       cout<<"\n----STUDENT----\n";
       cout<<"enter the name :";
       cin>>name;
       cout<<"enter id number : ";
       cin>>idno;
       cout<<"enter fee amount :";
       cin>>fee;
    }
    void display()
    {
         cout<<"\n\n----STUDENT----\n";
       cout<<"name of the student :";
       cout<<name;
       cout<<"\nid number of the student: ";
       cout<<idno;
       cout<<"\nfee  :";
       cout<<fee;
       cout<<"\n---------------------------";
    }
};
class teacher:public person
{
    void input()
    {
         cout<<"\n\n----TEACHER----\n";
        cout<<"enter the name :";
       cin>>name;
       cout<<"\nenter id number : ";
       cin>>idno;
       cout<<"\nsalary :";
       cin>>salary;
       
    }
    void display()
    {
         cout<<"\n----TEACHER----\n";
       cout<<"name of the student :";
       cout<<name;
       cout<<"\nid number of the student: ";
       cout<<idno;
       cout<<"\nsalary  :";
       cout<<salary<<endl;
       cout<<"\n------thank you----";
    }
};
int main()
{
    person *bptr;
    
    bptr=new student;
    bptr->input();
    bptr->display();
    
    bptr=new teacher;
    bptr->input();
    bptr->display();
    
    return 0;
}
