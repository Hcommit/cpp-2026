#include<iostream>
using namespace std;

class Book {
public:
    string bookName;
    string author;
    bool available = true;

    void issueBook() {
        if(available == true) {
            available = false;
            cout << "Book issued successfully!" << endl;
        }
        else {
            cout << "Book is already issued!" << endl;
        }
    }

    void returnBook() {
        if(available == false) {
            available = true;
            cout << "Book returned successfully!" << endl;
        }
        else {
            cout << "Book is already available!" << endl;
        }
    }

    void display() {
        cout << "\n--- BOOK DETAILS ---" << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;

        if(available == true)
            cout << "Availability: Available" << endl;
        else
            cout << "Availability: Issued" << endl;
    }
};

int main() {

    Book b;

    cout << "Enter Book Name: ";
    cin >> b.bookName;

    cout << "Enter Author Name: ";
    cin >> b.author;

    while(true) {

        int choice;

        cout << "\n--- LIBRARY MENU ---" << endl;
        cout << "1. Issue Book" << endl;
        cout << "2. Return Book" << endl;
        cout << "3. Display Book" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            b.issueBook();
        }
        else if(choice == 2) {
            b.returnBook();
        }
        else if(choice == 3) {
            b.display();
        }
        else if(choice == 4) {
            cout << "Thank you!";
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}