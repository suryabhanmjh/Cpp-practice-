#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    (num > 20 && num < 40) ? cout << "Number is between 20 and 40" : cout << "Number is not between 20 and 40";
}