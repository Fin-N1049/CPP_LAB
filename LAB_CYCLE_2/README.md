

#include <iostream>
using namespace std;
class matrix
{
    int **p;
    int d1,d2;
    int m,n;
    public:
    
    matrix(int x,int y);//constructor
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
           cout<<"allocated memory has been released";
       }
    
       
    void get_element(int i ,int j)//to get elements 
     {
    cout<<"enter the values of the matrix :";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
            
        }
      }
     }
     
     void display_matrix(int i,int j)
       {
           cout<<"the entered matrix ;"<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
       }
           
      /* void add(matrix &a,matrix &b)
       {
           
       }*/
       
};


int main() {
    matrix a(2,2);
    int m,n;
    int i,j;
    cout<<"enter the no of rows ";
    cin>>m;
    cout<<"enter the no of columns";
    cin>>n;
    cout<<"enter the values of the matrix :";
    
    a.get_element(i,j);
    a.display_matrix(i,j);
    
    return 0;
}
