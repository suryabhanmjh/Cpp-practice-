// capital small letter conversion

#include <iostream>
using namespace std;
int main() {
    string s="aBcDEfG";
    int size=s.length();

    for(int i=0;i<size;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;
    
}