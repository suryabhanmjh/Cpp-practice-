// factorials by using functions (Void return type)
#include<iostream>
using namespace std;
void factorial(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    cout<<ans<<endl;
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    factorial(num);
}