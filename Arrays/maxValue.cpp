// To find the maximum value in an array
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,9,2,5,7};
    int max=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max value is: "<<max;
}

// done