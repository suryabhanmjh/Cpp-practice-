// move zeros to the end of the array
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,0,4,1,7,0,5,0,6};
    int j=0;
    for(int i=0;i<9;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0; i<9;i++){
        cout<<arr[i]<<" ";
    }
}