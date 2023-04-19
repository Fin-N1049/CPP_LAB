#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    try {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your age: ";
        cin >> age;

        if (age <= 0 || age > 120) {
            throw out_of_range("Invalid age knappe ");
        }
    }
    catch (out_of_range &e) {
        cout << "Error: " << e.what() << endl;
        return 1;
    }

    cout << "Welcome, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;
    return 0;
}

