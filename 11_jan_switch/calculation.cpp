#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a; 
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the operation: +, -, *, /: ";

    char operation;
    cin>>operation;
    switch(operation){
        case '+':
            cout<<"The sum is "<<a+b;
            break;
        case '-':
            cout<<"The difference is "<<a-b;
            break;
        case '*':
            cout<<"The product is "<<a*b;
            break;
        case '/':
            cout<<"The division is "<<a/b;
            break;
        default:
            cout<<"Invalid operation";
    }
}