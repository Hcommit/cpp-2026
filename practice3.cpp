/*Addition
Class Calculator
Data: a, b
Functions:
add()
subtract()
multiply()
divide()*/

#include <iostream>
using namespace std;
class Calculator {
public:
    float a;
    float b;
    Calculator(float x, float y) {
        a = x;
        b = y;
    }
    float add() {
        return a + b;
    }

    float subtract() {
        return a - b;
    }

    float multiply() {
        return a * b;
    }

    float divide() {
        return a / b;
    }
};

int main() {
    Calculator c(11.5, 5);

    cout << "Addition = " << c.add() << endl;
    cout << "Subtraction = " << c.subtract() << endl;
    cout << "Multiplication = " << c.multiply() << endl;
    cout << "Division = " << c.divide() << endl;

    return 0;
}