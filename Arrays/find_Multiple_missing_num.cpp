// Find the multiple missing numbers in given array of 1 to n
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int diff=arr[0]-0;
    for(int i=0;i<size;i++){
        if(arr[i]-i!=diff){
            while(diff<arr[i]-i){
                cout<<i+diff<<", ";
                diff++;
            }
        }
    }
}