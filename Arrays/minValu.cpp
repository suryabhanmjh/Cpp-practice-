// find the minimum value in an array
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,8,1,5,7};
    int min=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Min value is: "<<min;
}

// done