/*N0 is divisible by 10*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    (num % 10 == 0) ? cout << "Number is divisible by 10" : cout << "Number is not divisible by 10";
    
}