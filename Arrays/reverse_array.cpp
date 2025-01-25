// print the reverse of the array

#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6}; // array of 5 elements size can fixed in the declaration
    //print the reverse of the array
    for(int i=4; i>=0; i--){
        cout<<i<<" = "<<arr[i]<<endl;
    }
    return 0;
}