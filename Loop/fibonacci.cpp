//Fibonacci series
#include<iostream>
using namespace std;
int main(){
    int first=0;
    int second=1;
    int next;

    for(int i=1;i<=5;i++){

        if(i==1){
            cout<<first;
            continue;
        }
        if(i==2){
            cout<<second;
            continue;
        }
        next=first+second;
        first=second;
        second=next;
        cout<<next;
    }
}