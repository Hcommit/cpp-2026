//LEARNING BASIC
#include <iostream>
using namespace std;
class Student{
public:
    string name;
    float marks;
    int id_no;
    Student(string n, float m,int i){
        name = n;
        marks = m;
        id_no = i;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "ID : " << id_no << endl;
    }
};

int main()
{
    Student s1("Hardik", 95,26);
    Student s2("Rahul", 85,34);
    Student s3("Amit", 90,1);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}