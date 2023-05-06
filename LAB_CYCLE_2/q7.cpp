#include<iostream>

using namespace std;

class alpha {
  protected: int a;
  public: alpha() {}
  alpha(int x) {
    a = x;
    cout << "parameterized constructor of class alpha is invoked" << endl;
  }
  void get_a() {
    cout << "the value of a : " << a << endl;
  }
};

class beta {
  protected: int b;
  public: beta() {}
  beta(int y) {
    b = y;
    cout << "parameterized constructor of class beta is invoked" << endl;
  }
  void get_b() {
    cout << "the value of b : " << b << endl;
  }
};

class gama: public alpha, public beta {
  protected: int g;
  public: gama() {}
  gama(int x, int y, int z): alpha(x),
  beta(y) {
    g = z;
    cout << "parameterized constructor of class gama is invoked" << endl;
  }
  void display() {
    get_a();
    get_b();
    cout << "the value of g : " << g << endl;
  }
};

int main() {
  int m, n, p;
  cout << "enter the value of a in alpha class: ";
  cin >> m;
  cout << "\nenter the value of b in beta class: ";
  cin >> n;
  cout << "\nenter the value of g in gama class: ";
  cin >> p;
  gama obj {
    m,
    n,
    p
  };
  obj.display();
  return 0;
}