#include<iostream>
using namespace std;
int main(){
    char option;
    do{
    int num,den,result;
    cout<<"\nenter numerator:"<<endl;
    cin>>num;
    cout<<"\nenter denominator:"<<endl;
    cin>>den;
    
    try{
        if (den==0)
        {
            throw den ;
        }
    result=num/den;
    cout<<"quotient :"<<result<<endl;
    }
    catch(int ex)
    {
        cout<<"exception caught :"<<ex<<endl;
        cout<<"exception:division by zero is not allowed";
    }
    cout<<"\nEnd of the program\n";
    cout<<"------------------------\n";
    
    cout<<"\ndo you want to continue the program ? (y/n)  :  ";
    cin>>option;
    }while(option=='y');
    
    return 0;
    
}
