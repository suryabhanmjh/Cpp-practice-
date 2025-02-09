// Pointer is a variable that stores the address of another variable

#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;  //reference variable
    cout<<*p<<endl;     //dereferencing
    *p=*p+1;
    cout<<a;
}