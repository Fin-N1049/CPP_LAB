#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    protected:
    int roll_no;
    char name[15];
    public:
    Student()
    {
    }
    Student(int r,char n[])
    {
        roll_no=r;
        strcpy(name,n);
    }
     void show_details()
    {
        cout<<"name of the student :"<<name<<endl;
        cout<<"roll.no. of the student :"<<roll_no<<endl;
    }
    
};
class test:virtual public Student
{
    protected:
    int mark1,mark2,mark3;
    public:
    test(int m,int o,int p)
    {
        mark1=m;
        mark2=o;
        mark3=p;
    }
    void show_marks()
    {
        cout<<"mark of student in maths="<<mark1<<endl;
        cout<<"mark of student in english="<<mark2<<endl;
        cout<<"mark of student in physics="<<mark3<<endl;
    }
};
class sports:virtual public Student
{
    protected:
    int score;
    public:
    sports(int s)
    {
        score=s;
    }

    void show_score()
    {
        cout<<"score of student in sports="<<score<<endl;
    }
};
class result:public test,public sports
{
    int total;
    public:

    result(int r,char n[],int m,int o,int p,int s):test(m,o,p),sports(s),Student(r,n)
    {
        
    }
    void calc_result ()
    {
      total=mark1+mark2+mark3+score;  
    }
    void display()
    {
       show_details();
       show_marks();
       show_score();
       calc_result();
       cout<<"overall score of student="<<total;
    }
};
int main()
{
    int r,m,o,p,s;
    char n[15];
    cout<<"enter the name of the student :"<<endl;
    cin>>n;
    cout<<"enter the roll.no of the student :"<<endl;
    cin>>r;
    cout<<"enter the mark of student in maths :"<<endl;
    cin>>m;
     cout<<"enter the mark of student in english :"<<endl;
    cin>>o;
     cout<<"enter the mark of student in physics :"<<endl;
    cin>>p;
     cout<<"enter the score of student in sports :"<<endl;
    cin>>s;
    if(m>50)
    cout<<"error!!!please enter correct scores"<<endl;
    else
    {
        continue;
    }
      if(o>50)
    continue;
    cout<<"error!!!please enter correct scores"<<endl;
    else
    {
        continue;
    }
      if(p>50)
    cout<<"error!!!please enter correct scores"<<endl;
    else
    {
        continue;
    }
      if((s>50))
    cout<<"error!!!please enter correct scores"<<endl;
    else
    {
        continue;
    }
    result rt(r,m,o,p,s);
    rt.display();
    cout<<"THANK YOU....";
    
    return 0;
}