#include<iostream>
using namespace std;
class matrix 
{ int **p; 
 int d1,d2;
 int m,n,w,x; 
 public:

matrix(int x,int y)//constructor
{
d1=x;
d2=y;
p=new int*[d1];
for(int i=0;i<d1;i++){
p[i]=new int[d2];}
    
}

~matrix()//destructor
   {
       for(int i=0;i<d1;i++)
       {
           delete p[i];
       }
       delete []p;
       cout<<"allocated memory has been released"<<endl;
   }

   
void get_element()//to get elements 
 {

for(int i=0;i<d1;i++)
{
    for(int j=0;j<d2;j++)
    {
        cin>>p[i][j];
        
    }
  }
 }

 void display_matrix()
   {
       
 for(int i=0;i<d1;i++)
{
    for(int j=0;j<d2;j++)
    {
        cout<<p[i][j]<<" ";
    }
    cout<<endl;
}cout<<endl<<endl<<endl;
   }
       
    matrix operator+(matrix &a,matrix&b)
  {
      matrix c;
   for(int i=0;i<d1;i++)
   {
      for(int j=0;j<d2;j++)
    {
        c.p[i][j]=a.p[i][j]+b.p[i][j];
    }
    cout<<endl; 
   }
  }
 
  
 matrix operator*(matrix &a,matrix&b)
  {
      matrix c;
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<x;j++)
    {
        for(int k=0;k<n;k++)
       c.p[i][j]=a.p[i][j]*b.p[i][j];
    }
    cout<<endl; 
   }
  }
};

int main()
 { 
     
  int m,n;
  int w,x;
   int i,j;
    cout<<"enter the no of rows of first matrix  :";
     cin>>m; 
     cout<<"enter the no of columns of first matrix :";
      cin>>n;
        matrix a(m,n);
        cout<<"enter the values of the matrix;"<<endl;
        a.get_element();
        cout<<"the first matrix ="<<endl;
        a.display_matrix();
        
       
    cout<<"enter the no of rows of second matrix  :";
    cin>>w;
    cout<<"enter the no of columns of second matrix  :";
    cin>>x;
    matrix b(w,x);
 cout<<"enter the values of the matrix;"<<endl;
b.get_element();
cout<<"the second matrix ="<<endl;
b.display_matrix();

 matrix c(w,x);
if (m==w && n==x)
{
c=a+b;
cout<<"the sum of matrices ="<<endl<<endl<<endl;
c.display_matrix();
}
else
{
    cout<<"!!!!!enter matrices of same order,sum can't be found!!!!!"<<endl;
}
if (n==w)
{
    c=a*b;
    cout<<"the product of the matrices =";
    c.display_matrix();
}
else
{
    cout<<"condition for matrix multiplication has not met,note:the no of column of first matrix should be equal to the no of rows of the second matrix for multiplication";
}

return 0;
}