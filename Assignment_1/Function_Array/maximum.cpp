//  the meximum number of an arrray

#include <stdio.h>
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1, 9, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    cout<<"Maximum number in the array is: " << max ;
    return 0;
}