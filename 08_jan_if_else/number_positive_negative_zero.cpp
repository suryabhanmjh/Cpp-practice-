#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a num ";
    cin>>num;

    if(num>0){
        cout<<"No. is positive";
    }
    else if(num<0){
        cout<<"No. is negative";
    }
    else{
        cout<<"No. is zero";
    }
}