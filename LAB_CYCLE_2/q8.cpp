#include <iostream>
using namespace std;
class shapes
{
    protected:
    float area;
   public:
  virtual void calc_area ()=0;//to calculate area
   virtual void display_area()=0;
};
class circle:public shapes
{ 
    float r;
    public:
   void calc_area ()
   {
       cout<<"enter the value of radius "<<endl;
       cin>>r;
        area=(3.14)*r*r;
   } 
    void display_area()
   {
       cout<<"the area of circle="<<area<<endl;
   }
};
class square:public shapes
{
    float s;
     public:
   void calc_area ()//to calculate area
   {
       cout<<"enter the length of side :";
       cin>>s;
       area=s*s;
   }
    void display_area()
   {
        cout<<"the area of square="<<area<<endl;
   }
};
class ellipse:public shapes
{
    float a,b;
     public:
   void calc_area ()
   {
       cout<<"enter the value of major axis and minor axis :";
       cin>>a>>b;
      area=(3.14)*a*b; 
   }
    void display_area()
   {
        cout<<"the area of ellipse="<<area<<endl;
   }
};
class rectangle:public shapes
{
    int l,b;
     public:
   void calc_area ()
   {
       cout<<"enter the value of length and breadth of rectangle :";
       cin>>l>>b;
       
       area=l*b;
   }
    void display_area()
   {
        cout<<"the area of rectangle="<<area<<endl;
   }
};


int main() {
    char option;
    int choice;
    shapes *bptr;
    do{
    cout<<"enter 1 to calculate the area of a circle :"<<endl;
    cout<<"enter 2 to calculate the area of a square :"<<endl;
    cout<<"enter 3 to calculate the area of a ellipse :"<<endl;
    cout<<"enter 4 to calculate the area of a rectangle :"<<endl;
    cin>> choice;
    switch(choice)
{
    case 1:
    
        bptr= new circle;
        bptr->calc_area();
        bptr->display_area();
    break;
    case 2:
    
        bptr= new square;
        bptr->calc_area();
        bptr->display_area();
    break;
    case 3:
    
        bptr= new ellipse;
        bptr->calc_area();
        bptr->display_area();
    break;
    case 4:
    
        bptr= new rectangle;
        bptr->calc_area();
        bptr->display_area();
    break;
    default:
    
        cout<<"error!!!enter a number between 1 to 4"<<endl;
    break;
}
    cout<<"do you want to continue? (y/n)  :";
    cin>>option;
    }while(option='y');
cout<<"THANK YOU...."<<endl;
    
    return 0;

}