#include<iostream>
using namespace std;
int main(){
    int num,den,result;
    cout<<"enter num and den:"<<endl;
    cin>>num>>den;
    
    try{
        if (den==0)
        {
            throw den ;
        }
    result=num/den;
    cout<<result;
    }
    catch(int ex)
    {
        cout<<"exception:division by zero is not allowed"<<ex;
    }
    return 0;
}