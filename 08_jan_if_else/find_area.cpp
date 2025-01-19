//find area of cielcle, rectangle, square and triangle using if else

#include <iostream>
//#include <cmath>
using namespace std;

int main(){
    int choice;
    cout<<"Enter 1 for circle, 2 for rectangle, 3 for square and 4 for triangle: ";
    cin>>choice;
    if (choice==1){
        float radius;
        cout<<"Enter radius of circle: ";
        cin>>radius;
        cout<<"Area of circle is: "<<3.14*radius*radius<<endl;
        //cout<<"Area of circle is: "<<M_PI*radius*radius<<endl;
    }
    else if (choice==2){
        float length,breadth;
        cout<<"Enter length and breadth of rectangle: ";
        cin>>length>>breadth;
        cout<<"Area of rectangle is: "<<length*breadth<<endl;
    }
    else if (choice==3){
        float side;
        cout<<"Enter side of square: ";
        cin>>side;
        cout<<"Area of square is: "<<side*side<<endl;
    }
    else if (choice==4){
        float base,height;
        cout<<"Enter base and height of triangle: ";
        cin>>base>>height;
        cout<<"Area of triangle is: "<<0.5*base*height<<endl;
    }
    else{
        cout<<"Invalid choice";
    }
}