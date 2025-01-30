// Find the frequency of each element in the given array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,6,1,2,3,1,2,3,1,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int count=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            cout<<arr[i]<<" is repeated "<<count<<" times " <<endl;;
        }
    }
}