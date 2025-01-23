//LCM program
#include<iostream>
using namespace std;
int main(){
    int a,b,max,ans;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    
    max=(a>b)?a:b;

    while(1){
        
        if(max%a==0 && max%b==0){
            ans=max;
            break;
        }
        ++max;
    }
    cout<<ans<<endl;
}