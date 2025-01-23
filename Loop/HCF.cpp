//HCF program
#include<iostream>
using namespace std;
int main(){
    int a,b,hcf;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    max(a>b)?a:b;

    for(int i=1;i<=num;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
        
    }
    cout<<hcf<<endl;
}