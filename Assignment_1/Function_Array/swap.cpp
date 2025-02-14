// swip last and first second number

#include <iostream>
using namespace std;

void add(int arr[]){
    int temp = arr[1];
    arr[1] = arr[3]; 
    arr[3] = temp;

}

int main(){
    int arr[] = {4,5,6,7,8};
    add(arr);

    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}