//find kth element in arrays

#include <iostream>
using namespace std;
int main(){
    int arr[]={4,6,9,13,17};
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[k-1];

}