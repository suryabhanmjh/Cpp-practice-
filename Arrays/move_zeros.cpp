// move zeros to the end of the array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,4,0,5,6,0,0,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<size){
        arr[count]=0;
        count++;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}