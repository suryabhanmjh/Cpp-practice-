// C++ Program to print a Diamond shaped star (*) pattern
#include <iostream>
using namespace std;
// Function to print a diamond pattern with 2*n-1 columns
// and 2*n-1 rows
void Diamond(int n)
{
    // First we print upper n rows out of the total 2*n-1
    // rows
    for (int i = 1; i <= n; i++) {

        // j iterates till n-i to print n-i number of spaces
        // in the (i)th row
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // k iterates till 2*i-1 to print 2*i-1 number of
        // stars (*) in the (i)th row
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        // line ends after printing 2*i-1 stars in (i)th row
        cout << endl;
    }

    // Now, we print other (n-1) rows of the pattern
    for (int i = 1; i <= n - 1; i++) {

        // j iterates till i to print i number of spaces in
        // the (i)th row
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        // k iterates till 2*(n-i)-1 to print 2*(n-i)-1
        // number of stars (*) in the (i)th row
        for (int k = 1; k <= 2 * (n - i) - 1; k++) {
            cout << "*";
        }
        // line ends after printing 2*(n-i)-1 stars in (i)th
        // row
        cout << endl;
    }
}

int main()
{

    int n = 5;
    // Function call
    Diamond(n);
    return 0;
}