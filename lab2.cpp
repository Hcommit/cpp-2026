#include <iostream>
using namespace std;

class Student {
    string name;
    int roll, m1, m2, m3, total;

public:
    Student() {
        total = 0;
    }

    void read() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
    }

    void print() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Student s;

    s.read();
    s.calculate();
    s.print();

    return 0;
}