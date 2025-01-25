#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6,7}; // array of 5 elements size can fixed in the declaration
    //    error: too many initializers for 'int [5]' 
     for(int i=0; i<5; i++){
            cout<<arr[i]<<" ";
     }
}