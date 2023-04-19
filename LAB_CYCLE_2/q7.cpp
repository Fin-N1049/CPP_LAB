#include<iostream>
using namespace std;
class alpha
{
    protected:
    int a;
    public:
    alpha()
    {
    }
    alpha(int x)
    {
        a=x;
        cout<<"parameterized constructor of class alpha is invoked"<<endl;
    }
    void get_a()
    {
        cout<<"the value of a :"<<a<<endl;
    }
};
class beta
{
    protected:
    int b;
    public:
    beta()
    {
    }
    beta(int y)
    {
        b=y;
         cout<<"parameterized constructor of class beta is invoked"<<endl;
    }
     void get_b()
    {
        cout<<"the value of b :"<<b<<endl;
    }
};
class gama:public alpha,public beta
{
    protected:
    int g;
    public:
    gama()
    {
    }
    gama(int a,int b,int z):alpha(a),beta(b)
    {
        g=z;
        cout<<"parameterized constructor of class gama is invoked"<<endl;
    }
    void display()
    {
        get_a();
        get_b();
        cout<<"the value of g :"<<g<<endl;
    
    }
};
int main()
{
    int a,b,g;
    cout<<"enter the value of a"<<endl;
    cin>>a;
      cout<<"enter the value of a"<<endl;
    cin>>b;
      cout<<"enter the value of a"<<endl;
    cin>>g;
    gama ob1(int a,int b,int g);
    // ob1.display();
    return 0;
}

