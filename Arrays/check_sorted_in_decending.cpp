// Check if an array is sorted in descending order.
#include <iostream>
using namespace std;
int main(){
    int arr[]={7,6,5,4,3,2,1};
    int n=7;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            count=1;
            break;
        }
    }
    if(count==1){
        cout<<"Array is not sorted in descending order";
    }
    else{
        cout<<"Array is sorted in descending order";
    }
}

// done
