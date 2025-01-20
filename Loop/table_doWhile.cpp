//table print by user with the help of do while
#include<iostream>
using namespace std;
int main(){
    int table,i;
    cout<<"Enter the table:";
    cin>>table;
    do{
        cout<<table*i<<endl;
        i++;
    }
    while(i<=10);
}