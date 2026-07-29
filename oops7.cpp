// LEARNING PRIVATE
#include <iostream>
using namespace std;

class potato{
private:
    int frenchFries = 47;
public:
    int chips = 34;
    int wedges = 56;

    void display() {
        cout << "French Fries = " << frenchFries << endl;
        cout << "Chips = " << chips << endl;
        cout << "Wedges = " << wedges << endl;
    }
};
int main(){
    potato p;

    cout<<p.chips<<endl;
    cout<<p.wedges<<endl;
    //cout<<p.frenchFries<<endl; ---------- ERROR
    p.display();
    return 0;
}