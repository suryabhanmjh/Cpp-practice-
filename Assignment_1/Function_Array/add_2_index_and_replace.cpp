// Adding  index 0 and index 4 and replace it index feome 2 .

#include <iostream>
using namespace std;

void add(int arr[]){
 arr[2] = arr[0]+arr[4];
}

int main(){
    int arr [] = {3,8,2,6,4};
    add(arr);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
