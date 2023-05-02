#include<iostream>
using namespace std;

class String
{
    string name;
    public:
    void input ()
    {
    cin>>name;
    }
    void compare (String b);
    void concatenate(String a,String b);
    void Length(void);
};

void String:: compare (String b)
{
    int x,y;
    x=name.length();
    y=b.name.length();
    if(x==y)
    {
        cout<<"both strings are of the same length"<<endl;
    }
    else if(x<y)
    {
        cout<<name<<" is smaller than "<<b.name<<endl;
    }
    else
    {
        cout<<name<<" is larger than "<<b.name<<endl;
    }
}
void String::concatenate(String a,String b)
{
    String c;
    name=a.name+b.name;
        cout<<"the concatenated string is "<<name<<endl;
}
void String::Length(void)
{
    int leng;
    leng=name.length();
    cout<<leng<<endl;

}
int main()
{

String a,b,c;

cout<<"enter the first string : ";
a.input();
cout<<"enter the second string : ";
b.input();
char option;
do{
int choice;

cout<<"\n\n-----String operatons-----\n\n";
cout<<"enter the corresponding number to perform the operation\n";
cout<<"1.    compare the strings     \n";
cout<<"2.  concatenate the strings    \n";
cout<<"3.   length of the strings     \n";
cin>>choice;
switch(choice)
{

case 1:
      a.compare(b);
      break;
case 2:
      c.concatenate(a,b);
      break;
case 3:cout<<"length of the first string is " ;
      a.Length();
       cout<<"length of the second string is " ;
      b.Length();
      cout<<"length of the concatenated string is ";
      c.Length();
      break;
default:
      cout<<"invalid operation,re-enter your choice\n";
}
cout<<"\n\n do you want to continue with the program \n enter 'y' for yes and 'n' for no   \n";
cin>>option;
}
while(option=='y');

return (0);
}
