// print a equilateral triange pattern
#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
