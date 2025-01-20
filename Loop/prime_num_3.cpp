//Prime a prime number or not method 2
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1){
        cout<<"not a prime";
        return 0;
    }
    for(int i=2;i*i<=num;i++){

        if(num%i==0){
            cout<<"Not a prime";
            return 0;
        }
    }
    cout<<"Prime";
}