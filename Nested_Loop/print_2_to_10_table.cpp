//print table with nesting
#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<=10;i++){
        for (int j=1;j<=10;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}