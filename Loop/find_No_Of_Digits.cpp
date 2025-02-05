/* Find the number of digits by given number. */
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count = 0;
    while(num>0){
        num /= 10;
        count++;
    }
    cout<<"The number of digits in the given number is "<<count;
}

// done