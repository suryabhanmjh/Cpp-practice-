// in array take one new variable and store the value of 1 and 3 index and then swap it with 1 and 3 index
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8};
    int temp=arr[1];
    arr[1]=arr[3];
    arr[3]=temp;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    

}