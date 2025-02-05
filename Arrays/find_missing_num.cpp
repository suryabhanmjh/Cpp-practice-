// Find the missing number in an array of 1 to n
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i+1]-arr[i]>1){
            cout<<arr[i+1]-1<<", ";
        }
    }
}

done