/*Rectangle

Class Rectangle
Data: length, breadth
Functions:
area()
perimeter() */

#include<iostream>
using namespace std;
class Rectangle{
public:
    float length;
    float breadth;
    
    int Perimeter(float length,float breadth){
        return 2*(length+breadth);
    }
    int Area(float length,float breadth){
        return length*breadth;
    }
};
int main(){
    Rectangle r;
    cout<<" Area = "<<r.Area(4,3)<<" m sq"<<endl;
    cout<<" Perimeter = "<<r.Perimeter(4,3)<<" m"<<endl;
    return 0;
}