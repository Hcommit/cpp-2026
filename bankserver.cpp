/*Bank Account

Class BankAccount
Data: accountNumber, name, balance
Functions:
deposit()
withdraw()
displayBalance()*/

#include<iostream>
using namespace std;

class BankAccount {
public:
    int accountNum = 2345;
    string name = "mhatu";
    float balance = 100000;
    float dep, with;

    void deposit() {
        cout << "Enter amount you want to deposit: ";
        cin >> dep;
        balance += dep;
        cout << "Amount deposited successfully!\n";
    }

    void withdraw() {
        cout << "Enter amount you want to withdraw: ";
        cin >> with;

        if (with <= balance) {
            balance -= with;
            cout << "Amount withdrawn successfully!\n";
        }
        else {
            cout << "Insufficient balance!\n";
        }
    }

    void display() {
        cout << "\nAccount Number - " << accountNum << endl;
        cout << "Name - " << name << endl;
        cout << "Balance - Rs " << balance << endl;
    }
};

int main() {

    BankAccount b;

    int acc;
    string n;

    cout << "Enter Account Number: ";
    cin >> acc;

    cout << "Enter Name: ";
    cin >> n;

    if (acc != b.accountNum || n != b.name) {
        cout << "Invalid Account Number or Name!";
        return 0;
    }

    while (true) {

        int choice;

        cout << "\n\n--- BANK MENU ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            b.deposit();
        }
        else if (choice == 2) {
            b.withdraw();
        }
        else if (choice == 3) {
            b.display();
        }
        else if (choice == 4) {
            cout << "Thank you!";
            break;
        }
        else {
            cout << "Invalid choice!";
        }

        string in;
        cout << "\nDo you want to choose again (yes or no): ";
        cin >> in;

        if (in == "no") {
            cout << "Thank you!";
            break;
        }
    }
}