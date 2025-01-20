//print table by using for loop
#include<iostream>
using namespace std;
int main(){
    int table;
    cout<<"Enter the table:";
    cin>>table;
    for(int i=1;i<=10;i++){
        cout<<table*i<<endl;
    }
}