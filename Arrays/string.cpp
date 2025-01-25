//print string elements
#include <iostream>
using namespace std;
int main(){
    string arr[5]={"apple","banana","cherry","dates","elderberry"}; // array of 5 elements size can fixed in the declaration
    for(int i=0; i<5; i++){
        cout<<i<<" = "<<arr[i]<<endl;
    }
}