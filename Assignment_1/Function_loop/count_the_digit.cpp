//  Count the digits in a given number

#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    cout << "The number of digits in the number is: ";
    cout << countDigits(98745);
    return 0;
}
