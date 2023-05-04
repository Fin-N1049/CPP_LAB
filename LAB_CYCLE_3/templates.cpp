#include<iostream>
using namespace std;

 template<typename T>

 class calculator
 {
     T num1;
     T num2;
     T sum;
     T difference;

     public:

     void input()
     {
         cout<<"enter the first number :";
         cin>>num1;
         cout<<"enter the second number :";
         cin>>num2;
     }
     void add ()
     {
         sum=num1+num2;
         cout<<"sum  :"<<sum<<endl;
     }
      void subtraction ()
     {
        if (num1>num2)
        {
            difference= num1-num2;
            cout<<"difference :"<<difference<<endl;
        }
        else if(num2>num1)
        {
          difference=num2-num1;
          cout<<"difference  :"<<difference<<endl;
        }
        else
        {
           difference=num2-num1;
           cout<<"difference :"<<difference<<endl;
        }
     }
     void display()
     {
         cout<<" first number :"<<num1<<endl;
         cout<<" second number :"<<num2<<endl;
     }
     };
 int main()
  {
     int choice;

     char option;
     do{
         cout<<"-\n\n\n---------CALCULATOR--------\nenter 1 to perform a integer value calculation\n  enter 2 to perform a decimal value calculation\n :";
         cin>>choice;
         if(choice==1)
         {
             calculator <int>obj1;
             obj1.input();
             obj1.display();
             obj1.add();
             obj1.subtraction();
         }
         else if(choice==2)
         {
             calculator <float>obj2;
             obj2.input();
             obj2.display();
             obj2.add();
             obj2.subtraction();
         }
         else
         {
             cout<<"!!!error!!!,re-enter correct option ";
         }
         cout<<"do you want to continue?(y/n)  :";
                  cin>>option;
     }while(option=='y');

     return 0;
 }
                                 
