#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    void input()
    {
        cout<<"enter the value of real part of the complex :";
        cin>>real;
        cout<<"enter the value of imaginary part ofthe complex :";
        cin>>imag;
    }
    void display()
    {
       if(imag<0)
       cout<<real<<imag<<"i"<<endl<<endl;
       else
       cout<<real<<"+"<<imag<<"i"<<endl<<endl;
       
    }
    friend complex operator+(complex a,complex b);
    friend complex operator*(complex a,complex b);
    
};
 complex operator+(complex a,complex b)
    {
        complex c;
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        return c;
    }
      complex operator*(complex a,complex b)
    {
        complex c;
        c.real=a.real*b.real;
        c.imag=a.imag*b.imag;
        return c;
    }
int main()
{
    char option;
    int choice;
    do{
    complex c1,c2,c3;
    cout<<"Complex 1"<<endl;
    c1.input();
    cout<<"Complex 2"<<endl;
    c2.input();
    cout<<"Complex 1 :";
    c1.display();
    cout<<endl<<"Complex 2 :";
    c2.display();
    cout<<"enter 1 to perform addition of the two matrices  :\n";
    cout<<"enter 2 to perform multiplication of the two matrices  :\n";
    cin>>choice;
    if(choice==1)
    {
        c3=c1+c2;
        cout<<endl<<"sum of the two complex  :";
        c3.display();
    }
    else if(choice==2)
    {
        c3=c1*c2;
        cout<<endl<<"product of the two complex :";
        c3.display();
    }
    else
    {
        cout<<"invalid option,re-enter option";
    }
    cout<<"do you want to continue the program ?(y/n)  :";
    cin>>option;
    if (option=='n')
    {
        cout<<"-----thank you-----";
    }
    else
    {
        
    }
    }while(option=='y');
    return 0 ;
}
