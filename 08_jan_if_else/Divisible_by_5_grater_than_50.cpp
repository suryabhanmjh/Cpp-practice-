#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%5==0 && num>50){
        cout<<num<<" is divisible by 5 and greater than 50\n";
    }
    else{
        cout<<num<<" is not divisible by 5 and greater than 50\n";
    }
}

