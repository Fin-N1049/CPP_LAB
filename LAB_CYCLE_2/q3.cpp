#include<iostream>
using namespace std;

class vectors
{
    private:
            int i_comp,j_comp,k_comp;
            int static count;
    public:
            friend istream& operator >>(istream &i,vectors &a);
            friend ostream& operator <<(ostream &o,vectors &a);
            friend vectors operator *(const vectors &a,const vectors &b);
};

int vectors::count=1;

istream& operator >>(istream &i,vectors &a)
{
    cout<<"vector "<<vectors::count<<endl;
    cout<<"i component = ";
    i>>a.i_comp;
    cout<<"j component = ";
    i>>a.j_comp;
    cout<<"k component = ";
    i>>a.k_comp;
    vectors::count++;
    return i;
}

ostream& operator <<(ostream &o,vectors &a)
{
    if(a.j_comp<0 && a.k_comp<0)
    {
        o<<a.i_comp<<"i"<<a.j_comp<<"j"<<a.k_comp<<"k \n";
    }
    else if(a.j_comp <0 && a.k_comp>0)
    {
        o<<a.i_comp<<"i"<<a.j_comp<<"j+"<<a.k_comp<<"k \n";
    }
    else if(a.k_comp<0 && a.j_comp>0){
        o<<a.i_comp<<"i+"<<a.j_comp<<"j"<<a.k_comp<<"k \n";
    }
    else
    {
        o<<a.i_comp<<"i + "<<a.j_comp<<"j + "<<a.k_comp<<"k \n";
    }
    return o;
}

vectors operator *(const vectors &a,const vectors &b)
{
    vectors temp;
    temp.i_comp = a.i_comp*b.i_comp;
    temp.j_comp = a.j_comp*b.j_comp;
    temp.k_comp = a.k_comp*b.k_comp;
    return temp;
}

int main()
{
    vectors a,b,c;
    cin>>a;
    cin>>b;
    cout<<"the entered vectors are"<<endl;
    cout<<a;
    cout<<b;
    cout<<"\nProduct of the vectors :"<<endl;
    c=a*b;
    cout<<c;
    return 0;
}
