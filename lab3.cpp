#include <iostream>
#include <string>   // optional but safe: needed for std::string
using namespace std;

class Contact
{
    string name, phone_number, e_mail;

public:

    // Default Constructor
    Contact()
    {
        cout << "Constructor Called" << endl;

        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter Customer Phone Number: ";
        cin >> phone_number;

        cout << "Enter Customer E-mail: ";
        cin >> e_mail;
    }

    // Copy Constructor
    Contact(const Contact &copy)
    {
        cout << endl << "Copy Constructor Called" << endl;

        name = copy.name;
        phone_number = copy.phone_number;
        e_mail = copy.e_mail;
    }

    // Display Function
    void display()
    {
        cout << endl << "***** Customer Details *****" << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer Phone Number: " << phone_number << endl;
        cout << "Customer E-mail: " << e_mail << endl;
    }

    // Destructor
    ~Contact()
    {
        cout << endl << "Destructor Called - Contact Object Deleted" << endl;
    }
};

int main()
{
    // Creation of original contact
    Contact bms;

    // Creation of copy using copy constructor
    Contact c = bms;

    // Display original contact
    cout << endl << "Original Contact:";
    bms.display();

    // Display copied contact
    cout << endl << "Copied Contact:";
    c.display();

    return 0;
}