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
       
  void add(matrix &a,matrix &b)
  {
   for(int i=0;i<d1;i++)
   {
      for(int j=0;j<d2;j++)
    {
        p[i][j]=a.p[i][j]+b.p[i][j];
    }
    cout<<endl; 
   }
  }
  
  matrix transpose()
  {
    matrix tr(d2,d1)
      
      for(int i=0;i<d1 ;i++)
   {
      for(int j=0;j<d2;j++)
    {
        tr.p=p[j][i];
    }
       
   }
   return tr;
  }
  
  void trace()
  {
      int sum=0;
       for(int i=0;i<d1;i++)
   {
    sum=sum+p[i][i];
  }cout<<sum<<endl<<endl;
  }
  void multiplication(matrix &a,matrix&b)
  {
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<x;j++)
    {
        for(int k=0;k<n;k++)
        p[i][j]=a.p[i][j]*b.p[i][j];
    }
    cout<<endl; 
   }
  }
};

int main()
 { 
     char option;
     do{
     
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
c.add(a,b);
cout<<"the sum of matrices ="<<endl<<endl<<endl;
c.display_matrix();
}
else
{
    cout<<"!!!!!enter matrices of same order,sum can't be found!!!!!"<<endl;
}
matrix tr1,tr2;
cout<<"transpose of first matrix"<<endl;
tr1=a.transpose();
tr1.display_matrix();
cout<<"transpose of second matrix"<<endl;
tr2=b.transpose();
tr2.display_matrix();
cout<<"the trace of first matrix =";
a.trace();
cout<<"the trace of second matrix =";
b.trace();
if (n==w)
{
    c.multiplication(a,b);
    cout<<"the product of the matrices =";
    c.display_matrix();
}
else
{
    cout<<"condition for matrix multiplication has not met,note:the no of column of first matrix should be equal to the no of rows of the second matrix for multiplication";
}
cout<<"do you want to continue the program ? enter 'y' for yes or 'n' for no  :";
cin>>option;
}while(option=='y');
cout<<"---------------------------------------\n\n";

return 0;
}
