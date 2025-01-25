#include <iostream>
using namespace std;
int main(){
    int arr[6]={2,3,4,5,}; // array of 9 elements size can fixed in the declaration
        //  it will print the gaebrage value of the array of last 3 elements
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}