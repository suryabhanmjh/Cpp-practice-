/* FInd the sum of the given digits*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum = 0;
    while(num>0){
        int digit = num%10;
        sum += digit;
        num /= 10;
    }
    cout<<"The sum of the digits is "<<sum;
}