// sub sequence of a string

#include <iostream>
using namespace std;



int main() {

    string s1 = "abc";
string s2 = "aggbadffc";

    int i = 0, j = 0;
    while (i < s1.length() && j < s2.length()) {
        if (s1[i] == s2[j]) {
            i++;
        }
        j++;
    }
    if (i == s1.length()) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}