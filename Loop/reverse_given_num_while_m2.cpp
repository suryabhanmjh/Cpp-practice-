//reverse number
#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout<<"Enter a number:";
    cin>>num;

    while(num>0){
        
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<rev;
}