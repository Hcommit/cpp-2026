/*Car Details

Class Car
Data: brand, model, price
Function: display()
Create 2 objects and display both.*/


#include<iostream>
using namespace std;
class Car{
public:
    string brand;
    string model_code;
    float Mkingcost;
    Car(){
        cout<<"Enter cars brand name - "<<endl;
        cin>>brand;
        cout<<"Enter model code - "<<endl;
        cin>>model_code;
        cout<<"Enter cost to make "<<endl;
        cin>>Mkingcost;
    }
    void Display(){
        cout<<"Brand name - "<<brand<<endl;
        cout<<"Model Code - "<<model_code<<endl;
        cout<<"Cost of making the vehicle is Rs "<<Mkingcost<<endl;
    }

};
int main(){


    cout << "Enter details of car 1:" << endl;
    Car c1;

    cout << "\nEnter details of car 2:" << endl;
    Car c2;

    cout<<"Car 1"<<endl;
    c1.Display();
    cout<<"Car 2"<<endl;
    c2.Display();


}