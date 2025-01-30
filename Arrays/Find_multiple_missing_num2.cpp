// Find the multiple missing numbers in given array of 1 to n
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,6,8,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       if(arr[i+1]-arr[i]!=1){
           for(int j=arr[i]+1;j<arr[i+1];j++){
               cout<<j<<" ";
           }
       }
    
    }
}