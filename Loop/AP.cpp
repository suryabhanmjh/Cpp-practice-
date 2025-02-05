/* find the AP series*/
#include <iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter d :";
    cin>>d;
    cout<<"Enter n :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a+=d;
    }
}

// done