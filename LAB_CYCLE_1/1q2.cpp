#include <iostream>
using namespace std;
#include <cmath>

void area(int length,int breadth){
	int area;
	area=length*breadth;
	cout<<"The Area of the Rectangle is "<<area<<std::endl;
}

void area(int side){
	int area;
	area=side*side;
	cout<<"The Area of the Square is "<<area<<std::endl;
}

void area(float radius){
	float area;
	area=3.14*radius*radius;
	cout<<"The Area of the Circle is "<<area<<std::endl;
}

void area(float height,float base1,float base2){
	float area;
	area=0.5*(height*(base1+base2));
	cout<<"The Area of the Trapezium is "<<area<<std::endl;
}

void area(int side1,int side2,int side3){
	float area;
	float s=(side1+side2+side3)/2;
	area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
	cout<<"The Area of the Triangle is "<<area<<std::endl;
}

int main() {
	int choice,option;
	do{
	cout<<"enter the respective number to perform the associated mathematical calculation or exit the program \n1.Area of Rectangle\n2.Area of Circle\n3.Area of Trapezium\n4.Area of Triangle\n5.Area of Square\n6.Exit the program"<<endl;
		cin>>choice;
			if (choice>6)
	{
	    cout<<"!!!error!!!,re-enter correct options";
	}
	else
	{
	    
	}
		switch(choice){
			case 1:
				int l,b;
				cout<<"--------calculation of area of rectangle--------"<<endl;
				cout<<"Enter the Length & Breadth of Rectangle\n";
				cin>>l>>b;
				area(l, b);
				break;
			case 2:
				float radius;
				cout<<"--------calculation of area of circle--------"<<endl;
				cout<<"\n\nEnter the Radius of the Circle\n";
				cin>>radius;
				area(radius);
				break;
			case 3:
				float height,base1,base2;
				cout<<"--------calculation of area of trapezium--------"<<endl;
				cout<<"\n\nEnter the Height and Bases of Trapezium\n";
				cin>>height>>base1>>base2;
				area(height, base1, base2);
				break;
			case 4:
				int side1,side2,side3;
				cout<<"--------calculation of area of triangle--------"<<endl;
				cout<<"\n\nEnter the Sides of Triangle\n";
				cin>>side1>>side2>>side3;
				area(side1, side2, side3);
				break;
			case 5:
				int side;
				cout<<"--------calculation of area of square--------"<<endl;
				cout<<"\n\nEnter the Side of the Square\n";
				cin>>side;
				area(side);
				break;
			case 6:
				break;
	}
    cout<<"Do you want to continue?\n1.Continue\n2.Quit\n";
	cin>>option;
	if (option>2)
	{
	    cout<<"!!!error!!!,re-enter correct options";
	}
	else
	{
	    
	}
	}
	while(option == 1);
	
	return 0;
	
	
}
