/*find GP series*/
#include <iostream>
using namespace std;
int main(){
    int a,r,n;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter r :";
    cin>>r;
    cout<<"Enter n :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a*=r;
    }
}

// done