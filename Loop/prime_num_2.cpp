//find the prime number or not prime number method 2
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;

    for(int i=2;i<num;i++){

        if(num%i==0){
            cout<<"Not a prime";
            return 0;
        }
    }
    cout<<"Prime";
}