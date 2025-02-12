// anagram find in string

#include <iostream>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";
    int a[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        a[s1[i] - 'a']++;
        a[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] != 0) {
            cout << "Not anagram";
            return 0;
        }
    }
    cout << "Anagram";
    return 0;
}