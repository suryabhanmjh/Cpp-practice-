// To reverse an array using a temporary array or swapping
#include <iostream>
using namespace std;
int main(){
    int arr[]={4,6,9,3,7};
    int i=0;
    int j=4;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
     }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

// done