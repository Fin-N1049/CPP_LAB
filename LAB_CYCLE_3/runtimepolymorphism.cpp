#include<iostream>
using namespace std;

class item
{
    int code;
    float price;

    public:
    void getdata(int a,int b)
    {
        code=a;
        price=b;
    }
    void display()
    {
        cout<<code<<price;
    }
    
};
const int size;

int main()
{
    item *p=new array[10];
    item *d=p;
    int x,i;
    float y;
     
     for(i=0;i<size;i++)
     {
        cout<< enter ;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
     }
     for(i=0;i<size;i++)
     {
        d->display();
        d++;
     }

     return 0;``    QQ
}