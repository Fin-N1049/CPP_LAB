#include <iostream>
using namespace std;

class Complex
{
    int real,imag;
 public:
    Complex()
    {
        real=0;
        imag=0;
    }
    void getData ()
    {
        cout<<"enter the value of real part : ";
        cin>>real;
        cout<<"enter the value of imaginary part : ";
        cin>>imag;
    }
    void display()
    {
         if(imag<0)
       cout<<real<<imag<<"i"<<endl<<endl;
       else
       cout<<real<<"+"<<imag<<"i"<<endl<<endl;
        
    }
    friend Complex add(Complex c1,Complex c2);
};
Complex add(Complex c1,Complex c2)
{
        Complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
    }
int main()
{
Complex c1,c2,c3;
cout<<"---FIRST COMPLEX---"<<endl;
c1.getData();
cout<<"---SECOND COMPLEX---"<<endl;
c2.getData();
cout<<"\nfirst complex  :";
c1.display();
cout<<"\nsecond complex :";
c2.display();
c3=add(c1,c2);
cout<<"\nthe resulting complex = ";
c3.display();

return 0;

}
