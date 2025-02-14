//  the array in descending order ;


#include<iostream>
using namespace std;

void sortarray(int arr [] , int size){
 
    for(int i = 0; i < size; i++){
         for(int j = i+1; j < size; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
         }
    }
}

int main(){
    int arr [] = {0,1,5,7,3};
    int size = 5;
   sortarray(arr, size);

    cout<<"Sorted array in descending order is: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}