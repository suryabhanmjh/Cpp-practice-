// Arange the all 0 at last of array;

#include <iostream>
using namespace std;

void nonzero(int arr [] , int size){
    int j = 0;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] != 0){
            int temp  = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i = 0; i <size ; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {6, 0, 8, 0, 0, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    nonzero(arr , size);

}