//print table by user with the help of while loop
#include<iostream>
using namespace std;
int main(){
    int table,i=1;
    cout<<"Enter the table:";
    cin>>table;
    while(i<=10){
        cout<<table*i<<endl;
        i++;
    }
}