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
       cout<<real<<imag<<"i";
       else
       cout<<real<<"+"<<imag<<"i";
       
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
    complex c1,c2,c3;
    cout<<"Complex 1"<<endl;
    c1.input();
    cout<<"Complex 2"<<endl;
    c2.input();
    cout<<"Complex 1 :";
    c1.display();
    cout<<endl<<"Complex 2 :";
    c2.display();
    c3=c1+c2;
    cout<<endl<<"sum of the two complex  :";
    c3.display();
    c3=c1*c2;
    cout<<endl<<"product of the two complex :";
    c3.display();

    
    return 0 ;
}