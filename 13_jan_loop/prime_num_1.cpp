//Prime or not prime number method 1
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a Number:";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(num%1==0){
            count++;
        }
    }
    if(count>2){
        cout<<"Not a Prime nnumber";
    }
    else{
        cout<<"Prime Number";
    }
}