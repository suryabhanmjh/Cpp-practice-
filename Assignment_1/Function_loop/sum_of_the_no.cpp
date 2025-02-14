// Find the Sum of a number

#include <iostream>
using namespace std;

int sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    cout <<"The sum of the number is: ";
    cout << sum(7853);
    return 0;
}
