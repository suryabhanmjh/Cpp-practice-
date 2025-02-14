// reverce the arry using function
#include <iostream>
using namespace std;

void rev_array(int arr[] , int size ){

    int i = 0;
    int j = size - 1;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for( int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int size = 10; 

    rev_array(arr,size);
    return 0;
}
// Output: 10 9 8 7 6 5 4 3 2 1