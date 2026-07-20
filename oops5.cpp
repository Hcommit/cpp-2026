//LEARNING BASICS

#include <iostream>
using namespace std;

class Student{
public:
    string name;
    float marks;
    Student(){
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter your marks: ";
        cin >> marks;
    }
};
int main(){
    Student s;

    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}



