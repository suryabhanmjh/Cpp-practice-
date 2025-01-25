// Flipped simple pyramid by user input


#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(j>=row+1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}