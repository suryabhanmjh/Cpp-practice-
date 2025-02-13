// anagram 3rd methid

#include <iostream>
using namespace std;
int main(){

string s1 = "abc";
string s2 = "aggbdffc";

if(s1.length() != s2.length()){
    cout << "Not anagram";
    return 0;
}

for(int i = 0; i < s2.length(); i++){
    bool check = false;
    for(int j = 0; j < s1.length(); j++){
        if(s1[i] == s2[j]){
            s2[j] = '0';
            check = true;
            break;
        }
    }
    if(check == false){
        cout << "Not anagram";
        return 0;
    }
}
cout << "Anagram";
}