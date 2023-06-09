#include<iostream>

using namespace std;

class student {
  private: char name[10];
  int roll_no;
  int marks[3];
  char grade;
  int totalmarks;
  float pctg;

  public: void input(void);
  char calc_grade(void);
  void display(void);

};

void student::input() {
  cout << "enter student name: ";
  cin >> name;
  cout << "enter roll number: ";
  cin >> roll_no;
  cout << "enter the mark of student in physics   out of 100 : ";
  cin >> marks[0];
  if (marks[0] > 100) {
    cout << "!!!error!!! ,(note :marks cannot be more than 100 ),please enter the marks again ";
    cin >> marks[0];
  } else {

  }
  cout << "enter the mark of student in chemistry out of 100 : ";
  cin >> marks[1];
  if (marks[1] > 100) {
    cout << "!!!error!!! ,(note :marks cannot be more than 100 ),please enter the marks again ";
    cin >> marks[1];
  } else {

  }
  cout << "enter the mark of student in maths     out of 100 : ";
  cin >> marks[2];
  if (marks[2] > 100) {
    cout << "!!!error!!! ,(note :marks cannot be more than 100 ),please enter the marks again ";
    cin >> marks[2];
  } else {

  }

}

char student::calc_grade() {

  totalmarks = marks[0] + marks[1] + marks[2];
  pctg = totalmarks / 3;

  if (pctg >= 90)
    grade = 'A';
  else if (pctg >= 80)
    grade = 'B';
  else if (pctg >= 70)
    grade = 'c';
  else if (pctg >= 60)
    grade = 'D';
  else
    grade = 'E';
  return grade;
}

void student::display() {
  cout << endl << endl;
  cout << "Name of student: " << name << "\n";
  cout << "Roll no : " << roll_no << "\n";
  cout << "Mark of student in physics   out of 100 : " << marks[0] << endl;
  cout << "Mark of student in chemistry out of 100 : " << marks[1] << endl;
  cout << "Mark of student in maths     out of 100 : " << marks[2] << endl;
  cout << "Total marks of the student :" << totalmarks << endl;
  cout << "percentage of the student  :" << pctg << "%" << endl;
  cout << "Grade: " << grade << endl;
}

int main() {
  int n;
  cout << "enter the number of students for calculating grades  :";
  cin >> n;
  cout << endl;
  student s[n];
  for (int i = 0; i < n; i++) {
    cout << "details of student " << i + 1 << endl;
    s[i].input();
    s[i].calc_grade();
  }
  cout << "" << endl << endl;
  cout << "----------------EXAM RESULTS--------------" << endl;
  for (int i = 0; i < n; i++) {
    s[i].display();
  }

  return 0;
}