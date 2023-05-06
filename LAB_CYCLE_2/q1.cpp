#include<iostream>

#include<cmath>

using namespace std;
class vector {
  int i, j, k, magnitude;
  public:
    void get_values();
  void display();
  void calc_mag();

  bool operator == (vector & a);
  bool operator != (vector & a);
  bool operator < (vector & a);
  bool operator <= (vector & a);
  bool operator > (vector & a);
  bool operator >= (vector & a);
};
void vector::get_values() {
  cout << "enter the value of the i th component :";
  cin >> i;
  cout << "enter the value of the j th component :";
  cin >> j;
  cout << "enter the value of the k th component :";
  cin >> k;
}
void vector::display() {
  if (j >= 0 && k >= 0) {
    cout << i << "i +" << j << "j +" << k << "k";
  } else if (j < 0 && k < 0) {
    cout << i << "i " << j << "j " << k << "k";
  } else if (j < 0) {
    cout << i << "i " << j << "j +" << k << "k";
  } else {
    cout << i << "i +" << j << "j " << k << "k";
  }
}
void vector::calc_mag() {
  magnitude = sqrt((i ^ 2) + (j ^ 2) + (k ^ 2));
}
bool vector::operator == (vector & a) {
  if (a.magnitude == magnitude)
    return (true);
  else
    return (false);
}
bool vector::operator != (vector & a) {
  if (a.magnitude != magnitude)
    return (true);
  else
    return (false);
}
bool vector::operator < (vector & a) {
  if (a.magnitude < magnitude)
    return (true);
  else
    return (false);
}
bool vector::operator <= (vector & a) {
  if (a.magnitude <= magnitude)
    return (true);
  else
    return (false);
}
bool vector::operator > (vector & a) {
  if (a.magnitude > magnitude)
    return (true);
  else
    return (false);
}
bool vector::operator >= (vector & a) {
  if (a.magnitude >= magnitude)
    return (true);
  else
    return (false);
}
int main() {
  char option;

  vector ob1, ob2;
  cout << "Enter the values for the first vector" << endl;
  ob1.get_values();
  cout << "Enter the values for the second vector" << endl;
  ob2.get_values();
  ob1.calc_mag();
  ob2.calc_mag();
  cout << "vector 1 :";
  ob1.display();
  cout << endl << "vector 2 :";
  ob2.display();
  do {
    int choice = 0;
    cout << endl << endl << endl;
    cout << "Enter 1 for checking if both the vectors are equal," << endl;
    cout << "Enter 2 for checking if both the vectors are not equal," << endl;
    cout << "Enter 3 for checking if the second vector is greater than the first vector," << endl;
    cout << "Enter 4 for checking if the second vector is greater than or equal to the first vector," << endl;
    cout << "Enter 5 for checking if the first vector is greater than the second vector," << endl;
    cout << "Enter 6 for checking if the first vector is greater than or equal to the second vector," << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice) {
    case 1:

      if (ob1 == ob2)
        cout << "Both the vectors are equal. " << endl;
      else
        cout << "Both the vectors are not equal. " << endl;
      break;

    case 2:
      if (ob1 != ob2)
        cout << "Both the vectors are not equal. " << endl;
      else
        cout << "Both the vectors are equal. " << endl;
      break;
    case 3:
      if (ob1 < ob2)
        cout << "The second vector is greater than the first vector. " << endl;
      else
        cout << "The second vector is not greater than the first vector " << endl;
      break;
    case 4:
      if (ob1 <= ob2)
        cout << "The second vector is greater than or equal to the first vector. " << endl;
      else
        cout << "The second vector is not greater than or equal to the first vector " << endl;
      break;
    case 5:
      if (ob1 > ob2)
        cout << "The first vector is greater than the second vector. " << endl;
      else
        cout << "The first vector is not greater than the second vector " << endl;
      break;
    case 6:
      if (ob1 >= ob2)
        cout << "The first vector is greater than or equal to the second vector. " << endl;
      else
        cout << "The first vector is not greater than or equal to the second vector " << endl;
      break;
    default:
      cout << "Wrong choice!" << endl;

    }
    cout << "do you want to continue ?(y/n)";
    cin >> option;
    if (option == 'n') {
      cout << "----thank you----";
    } else {

    }
  } while (option == 'y');

  return 0;

}