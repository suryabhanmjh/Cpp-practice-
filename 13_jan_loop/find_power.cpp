//find power with the help of for loop
#include<iostream>
using namespace std;
int main(){
    int base,power,ans=1;
    cout<<"Enter a base:";
    cin>>base;
    cout<<"Power:";
    cin>>power;
    
    for(int i=1;i<=power;i++){
        ans=ans*base;
    }
    cout<<ans;
}