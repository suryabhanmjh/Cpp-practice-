/*This program takes an integer from user and that integer is reversed.

If the reversed integer is equal to the integer entered by user then, that number is a palindrome if not that number is not a palindrome.*/

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int temp = a;
    int reverse = 0;
    while(a>0){
        int digit = a%10;
        reverse = reverse*10 + digit;
        a /= 10;
    }
    if(temp == reverse){
        cout<<"The number is a palindrome";
    }
    else{
        cout<<"The number is not a palindrome";
    }
}

// done