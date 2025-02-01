// move zeros to the end of the array
#include <iostream>
using namespace std;
int main(){
    int arr[]={7,9,0,3,0,6,0};
    int j=0;
    for(int i=0;i<7;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}