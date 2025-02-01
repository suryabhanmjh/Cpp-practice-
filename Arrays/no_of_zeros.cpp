// Find the numbers of zeros in the given array
#include <iostream>
using namespace std;
int main(){
    int arr[]={7,9,0,3,0,6,0};
    int count=0;
    for(int i=0;i<7;i++){
        if(arr[i]==0){
            count++;
        }
    }
    cout<<count;
} 