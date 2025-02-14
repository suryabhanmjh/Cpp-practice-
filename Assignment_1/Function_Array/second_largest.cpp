//  second largest element in array;

#include <iostream>
#include <climits>
using namespace std;

 void secondlargest(int arr[] ,int size){

    if(size < 2){
        cout << "Array must contain at least 2 elements." << endl;
        return;
    }

    int largest = arr[0] , secondlargest = INT_MIN;

    for(int i = 1 ; i < size ; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] < largest){
            secondlargest = arr[i];
        }
    }
    cout << "The second largest element is: " << secondlargest << endl; 
 }

 int main(){
    int arr[] = {9,3,4,8,5,6,1};
    int size = 7;
    secondlargest(arr ,size);
 }