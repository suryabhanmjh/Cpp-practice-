/*the greater no. between three number*/
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first no. : ";
    cin>>a;
    cout<<"Enter second no. : ";
    cin>>b;
    cout<<"Enter third no. : ";
    cin>>c;
    
    if(a>b && a>c){
        cout<<a<<" is greater.";
    }
    else if(b>a && b>c){
        cout<<b<<" is greater.";
    }
    else {
        cout<<c<<" is greater.";
    }
    
}