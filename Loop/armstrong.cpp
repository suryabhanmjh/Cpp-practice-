/*armstrong*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int temp = a;
    int sum = 0;
    while(a>0){
        int digit = a%10;
        sum += digit*digit*digit;
        a /= 10;
    }
    if(temp == sum){
        cout<<"The number is an armstrong number";
    }
    else{
        cout<<"The number is not an armstrong number";
    }
}

// done