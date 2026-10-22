
#include <iostream>
using namespace std;

int count = 0;

void TOH(int n, char S, char T, char D)
{
    if (n == 0)
        return;

    TOH(n - 1, S, D, T);

    cout << "Move disk " << n << " from " << S << " to " << D << endl;
    count++;

    TOH(n - 1, T, S, D);
}

int Ack(int m, int n)
{
    if (m == 0)
        return n + 1;

    if (n == 0)
        return Ack(m - 1, 1);

    return Ack(m - 1, Ack(m, n - 1));
}

int main()
{
    int ch, n, m;

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Tower of Hanoi" << endl;
        cout << "2. Ackermann Function" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << "Enter number of disks: ";
                cin >> n;

                count = 0;
                TOH(n, 'S', 'T', 'D');

                cout << "Total moves = " << count << endl;
                break;

            case 2:
                cout << "Enter value of m: ";
                cin >> m;

                cout << "Enter value of n: ";
                cin >> n;

                cout << "Ackermann Result = " << Ack(m, n) << endl;
                break;

            case 3:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (ch != 3);

    return 0;
}

