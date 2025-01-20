//find the smallest digit in number
#include<iostream>
using namespace std;
int main(){
    int num=98753;
    int min=9;

    while(num>0){

        int digit=num%10;

        if(digit<min){
            min=digit;
        }
        num=num/10;
    }
    cout<<min;
}