// sum of an array

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {7, 3, 1, 8, 5};
    int size = 5;
    sumArray(arr , size);
    cout<< "Sum of array elements: " << sumArray(arr, size) <<endl; 
}
