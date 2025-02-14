// Table

#include <iostream>
using namespace std;

void Table(int n) {
    for (int i = 1; i <= 10; i++) {
        cout <<"The table of " << n << " is: " << endl;
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    Table(5);
    return 0;
}
