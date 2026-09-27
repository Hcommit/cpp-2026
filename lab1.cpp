/*  Program 1: You are building a feature for an e-commerce platform that displays product prices. 
Write a C++ program that accepts a list of product prices and displays them sorted both in ascending
 (low to high) and descending (high to low) order, allowing customers to choose how they want to 
 view the prices. */


#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;


#include <iostream>
#define MAX 100
using namespace std;

void bubblesort(int n, float values[MAX])
{
    int i, j;

    for(i = 0; i < n; i++)
        for(j = 0; j < n - i - 1; j++)
        {
            if(values[j] > values[j + 1])
            {
                float temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
}

int main()
{
    int number, i, choice;
    float prices[MAX];

    cout << "Enter total number of prices: ";
    cin >> number;

    cout << "Enter " << number << " prices: ";
    for(i = 0; i < number; i++)
        cin >> prices[i];

    bubblesort(number, prices);

    do
    {
        cout << "1) Prices in Ascending Order" << endl
             << "2) Prices in Descending Order" << endl
             << "3) Exit" << endl;

        cout << "Enter Your choice" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Prices List" << endl;
                for(i = 0; i < number; i++)
                    cout << prices[i] << endl;
                break;

            case 2:
                cout << "Prices List" << endl;
                for(i = number - 1; i >= 0; i--)
                    cout << prices[i] << endl;
                break;

            case 3:
                cout << "Program terminated successfully";
                exit(0);

            default:
                cout << "Invalid Choice...! Enter valid choice from the menu" << endl;
        }

    } while(1);

    return 0;
}