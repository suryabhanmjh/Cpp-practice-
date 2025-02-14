//  Find the sum of tne natural numbers from 1 to N.

#include <iostream>
using namespace std;

int sum_of_N(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sum_of_N(10);
    return 0;
}
