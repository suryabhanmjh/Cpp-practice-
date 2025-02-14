// Print the even numbers 

#include <iostream>
using namespace std;

void Even(int n) {
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
}

int main() {
    Even(10);
    return 0;
}
