// Reverse the given number 
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    cout <<"Reverse of 46378 is: ";
    cout << reverseNumber(46378);
    return 0;
}
