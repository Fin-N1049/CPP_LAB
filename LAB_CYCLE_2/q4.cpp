#include<iostream>

using namespace std;
class matrix {
  int ** p;
  int d1, d2;
  int m, n, w, x;
  public:

    matrix(int x, int y) //constructor
  {
    d1 = x;
    d2 = y;
    p = new int * [d1];
    for (int i = 0; i < d1; i++) {
      p[i] = new int[d2];
    }

  }
  matrix() {} //default constructor

    ~matrix() {
      if (p != nullptr) {
        for (int i = 0; i < d1; i++)
          delete[] p[i];
        delete[] p;
      }
    }

  void get_element() //to get elements 
  {

    for (int i = 0; i < d1; i++) {
      for (int j = 0; j < d2; j++) {
        cin >> p[i][j];

      }
    }
  }

  void display_matrix() {

    for (int i = 0; i < d1; i++) {
      for (int j = 0; j < d2; j++) {
        cout << p[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  friend matrix & operator + (matrix & a, matrix & b);
  friend matrix & operator * (matrix & a, matrix & b);
  friend ostream & operator << (ostream & out, matrix & x);

};
ostream & operator << (ostream & out, matrix & x) {
  for (int i = 0; i < x.d1; i++) {
    for (int j = 0; j < x.d2; j++) {
      out << x.p[i][j] << " ";
    }
    out << endl;
  }
  return out;
}

matrix & operator + (matrix & a, matrix & b) {
  matrix * c = new matrix(a.d1, a.d2);
  for (int i = 0; i < a.d1; i++) {
    for (int j = 0; j < a.d2; j++) {
      c -> p[i][j] = a.p[i][j] + b.p[i][j];
    }
  }
  return * c;
}

matrix & operator * (matrix & a, matrix & b) {
  matrix * x = new matrix(a.d1, b.d2);
  for (int i = 0; i < x -> d1; i++) {
    for (int j = 0; j < x -> d2; j++) {
      x -> p[i][j] = 0;
      for (int k = 0; k < a.d2; k++) {
        x -> p[i][j] += a.p[i][k] * b.p[k][j];
      }
    }
  }

  return * x;
}

int main() {

  int m, n;
  int w, x;
  int i, j;
  cout << "enter the no of rows of first matrix  :";
  cin >> m;
  cout << "enter the no of columns of first matrix :";
  cin >> n;
  matrix a(m, n);
  cout << "enter the values of the matrix :" << endl;
  a.get_element();
  cout << "the first matrix =" << endl << a;

  cout << "enter the no of rows of second matrix  :";
  cin >> w;
  cout << "enter the no of columns of second matrix  :";
  cin >> x;
  matrix b(w, x);
  cout << "enter the values of the matrix :" << endl;
  b.get_element();
  cout << "the second matrix =" << endl << b;

  matrix c(w, x);
  matrix d(m, x);
  if (m == w && n == x) {
    c = a + b;
    cout << "the sum of matrices =" << endl << c;
  } else {
    cout << "!!!!!enter matrices of same order,sum can't be found!!!!!" << endl;
  }
  if (n == w) {
    d = a * b;
    cout << "the product of the matrices =" << endl << d;

  } else {
    cout << "condition for matrix multiplication has not met,note:the no of column of first matrix should be equal to the no of rows of the second matrix for multiplication";
  }
  return 0;
}