#include<iostream>

using namespace std;
class complex {
  int real;
  int imag;
  public:
    complex() {}
  complex(int a) {
    real = a;
    imag = a;
  }
  complex(int a, int b) {
    real = a;
    imag = b;
  }
  void sum(complex c1, complex c2) {

    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;

  }
  void display() {
    if (imag < 0)
      cout << real << imag << "i" << endl;
    else {
      cout << real << "+" << imag << "i" << endl;
    }
  }

};
int main() {
  int r1, i1, r2, i2, choice;
  char option;
  do {
    complex c[2];

    for (int i = 0; i < 2; i++) {
      cout << "-----number " << i + 1 << "-----\n";
      cout << "1.different values for the real and imaginary part of the first complex \n2.same value for the real and imaginary part of the first complex \n";
      cout << "enter corresponding number to select the type of complex number :";
      cin >> choice;
      if (choice == 1) {
        cout << "enter the value of real part :";
        cin >> r1;
        cout << "enter the value of imaginary part :";
        cin >> i1;
        c[i] = complex(r1, i1);
      } else if (choice == 2) {
        cout << "enter the value for real and imaginary part :";
        cin >> r1;
        c[i] = complex(r1);
      } else {
        cout << "!!!error!!!,re-enter appropriate option" << endl;
        i = i - 1;
      }
    }
    cout << "-\n\n";
    complex c3;

    c3.sum(c[0], c[1]);
    cout << "first complex :";
    c[0].display();
    cout << "second complex :";
    c[1].display();
    cout << "resultant complex :";
    c3.display();

    cout << "do you want to continue the program?,enter 'y' for yes and 'n' for no  :";
    cin >> option;
  }
  while (option == 'y');
  return 0;
}