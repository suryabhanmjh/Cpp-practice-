// Check if an array is sorted in ascending order
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count=1;
            break;
        }
    }
    if(count==1){
        cout<<"Array is not sorted in ascending order";
    }
    else{
        cout<<"Array is sorted in ascending order";
    }
}

// done