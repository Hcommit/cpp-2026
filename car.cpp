#include <iostream>
using namespace std;

class Car {

public:
    // Public Information
    string company = "Toyota";
    int Mxspeed = 120;
    float mileage = 18.5;
    char grade = 'A';
    bool electric = false;

private:
    // Private Information
    float CPL = 24.5;      // Cost Price (Lakhs)
    float HSPL = 34.5;     // Highest Selling Price (Lakhs)
    float LSPL = 30.2;     // Lowest Selling Price (Lakhs)
    string issue = "Overheating, Breakdown, Low Security";

public:

    void displayPublic() {
        cout << "\n========== PUBLIC RECORD ==========\n";
        cout << "Company                : " << company << endl;
        cout << "Maximum Speed (km/h)   : " << Mxspeed << endl;
        cout << "Mileage (km/l)         : " << mileage << endl;
        cout << "Grade                  : " << grade << endl;
        cout << "Electric Car           : " << electric << endl;
    }

    void displayPrivate() {
        cout << "\n========== PRIVATE RECORD ==========\n";
        cout << "Cost Price (Lakhs)            : " << CPL << endl;
        cout << "Highest Selling Price (Lakhs) : " << HSPL << endl;
        cout << "Lowest Selling Price (Lakhs)  : " << LSPL << endl;
        cout << "Known Issues                  : " << issue << endl;
    }
};

int main() {

    Car c;
    int choice;

    cout << "=====================================\n";
    cout << "      TOYOTA INFORMATION SYSTEM\n";
    cout << "=====================================\n";
    cout << "1. Customer\n";
    cout << "2. Company Employee\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nWelcome Customer!\n";
        c.displayPublic();
    }
    else if (choice == 2) {
        cout << "\nWelcome Employee!\n";
        c.displayPublic();
        c.displayPrivate();
    }
    else {
        cout << "\nInvalid Choice!";
    }

    return 0;
}