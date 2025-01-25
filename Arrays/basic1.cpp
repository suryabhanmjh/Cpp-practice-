// fixed the array size in the declaration.

#include <iostream>
using namespace std;
int main(){
    int arr[6]={2,3,4,5,6,7}; // array of 6 elements size can fixed in the declaration
    //print the last element of the array
    for(int i=5; i<6; i++){
        cout<<arr[i]<<" ";
    }
}