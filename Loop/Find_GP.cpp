/*print the Geometric Progression series*/
#include<iostream>
using namespace std;
int main(){
    int a, r, n;
    cout<<"Enter the first term of the Geometric Progression series: ";
    cin>>a;
    cout<<"Enter the common ratio of the Geometric Progression series: ";
    cin>>r;
    cout<<"Enter the number of terms in the Geometric Progression series: ";
    cin>>n;
    cout<<"The Geometric Progression series is: ";
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a *= r;
    }
    return 0;
}