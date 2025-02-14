//  Print the fibonacci series 
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
}

int main() {
    fibonacci(10);
    return 0;
}
