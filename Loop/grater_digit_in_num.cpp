//find the grater digit in the number
#include<iostream>
using namespace std;
int main(){
    int num=123456;
    int max=0;;

    while(num>0){
        int digit=num%10;

        if(digit>max){
            max=digit;
        }
        num=num/10;
    }
    cout<<max;
}