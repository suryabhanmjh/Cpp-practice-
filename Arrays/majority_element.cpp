// Find the majority element in the given array
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,2,1,1,1,2,2};
    int n=7;
    int count=1;
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count>n/2){
        cout<<"Majority element is: "<<arr[res];
    }
    else{
        cout<<"No majority element";
    }
}