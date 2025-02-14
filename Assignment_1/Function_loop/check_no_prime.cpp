//  Check if the number is Prime

#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << (Prime(13) ? "Prime" : "Not Prime");
    return 0;
}
