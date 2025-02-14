// find the minimum number of the arrray.

#include <iostream>
using namespace std;

int min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {7, 4, 3, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = min(arr, size);
    cout<<"minimum number in the array is: " << min ;
    return 0;
}