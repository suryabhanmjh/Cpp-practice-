#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first no. :";
    cin>>a;
    cout<<"Enter second no. :";
    cin>>b;
    try{
        if(b==0){
            throw 0;
        }
    else{
        cout<<a/b;
    }
        
    }
    catch(const char *n){
        cout<<n;
    }
}
