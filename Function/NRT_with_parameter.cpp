// Non return type function with parameter
#include <iostream>
using namespace std;
void show(string a){
    cout<<a;
}
int main(){
    string ans = "Hello World";
    show(ans);
    return 0;
}