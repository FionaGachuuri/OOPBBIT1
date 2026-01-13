#include <iostream>
using namespace std;

/**
*This program demonstrates the use of parameterized constructors in C++.
* It defines a class "student" with attrubutes, name , adminNumber and marks
* and a parameterized constructor to initialize these attributes.
*/

class student {
    private:
        string name;
        int adminNumber;
        float marks;

        public:

        student(string n, int a, float m) {
            name = n;
            adminNumber = a;
            marks = m;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Admin Number: " << adminNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    student student1("Alice", 101, 95.5);
    student student2("Bob", 102, 88.0);

    cout << "Student 1 Info:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Info:" << endl;
    student2.displayInfo();

    return 0;
}
