#include <iostream>
using namespace std;

class Student {
    string name;
    string usn;
    int marks[3] = {0};
    int total = 0;
    float percentage = 0;

public:
    void getMarks() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Student USN: ";
        cin >> usn;

        total = 0;   // Reset total before calculation

        for (int i = 0; i < 3; i++) {
            cout << "Enter marks of Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 3.0;
    }

    void display() {
        cout << "\n========== SCORE CARD ==========" << endl;
        cout << "Name       : " << name << endl;
        cout << "USN        : " << usn << endl;

        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << " : " << marks[i] << endl;
        }

        cout << "Total Marks: " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;
    }
};

int main() {
    Student s;

    s.getMarks();
    s.display();

    return 0;
}