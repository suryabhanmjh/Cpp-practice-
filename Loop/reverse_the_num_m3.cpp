//reverse number
#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"enter a number:";
    cin>>num;

    while(num>0){

        int digit=num%10;
        cout<<digit;
        num=num/10;
    }
}

done