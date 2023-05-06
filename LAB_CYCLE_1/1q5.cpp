#include <iostream>

class matrix {
  int ** p; //double pointer to store row array memory
  int d1, d2;
  public:
    matrix(int, int);
  void getelement(int, int, int);
  int putelement(int, int);
  ~matrix() //destructor
  {
    for (int i = 0; i < d2; i++)
      delete[] p[i];
    delete[] p;
    std::cout << "deleted";
  }
};
matrix::matrix(int x, int y) {
  std::cout << "constructor called : \n";
  d1 = x;
  d2 = y;
  p = new int * [d1]; //makes memory locations for no of rows
  for (int i = 0; i < d1; i++) {
    p[i] = new int[d2]; //makes row
  }
}
void matrix::getelement(int x, int y, int value) {
  p[x][y] = value;
}
int matrix::putelement(int x, int y) {
  return p[x][y];
}
int main() {
  int m, n;
  std::cout << "Enter the no of rows : ";
  std::cin >> m;

  std::cout << "enter no of columns : ";
  std::cin >> n;

  matrix a(m, n);
  int value;
  for (int i = 0; i < m; i++) {
    std::cout << "ROW" << i + 1 << std::endl;
    for (int j = 0; j < n; j++) {
      std::cout << "Enter the " << "value at position " << j + 1 << " : ";
      std::cin >> value;
      a.getelement(i, j, value);
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << a.putelement(i, j) << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}