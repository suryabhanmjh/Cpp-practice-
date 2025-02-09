// call by address with pointer

#include <iostream>
using namespace std;

int plusOne(int *num){   //formal parameter
    *num=*num+1;
    return *num;
}

int main(){
    int a=10;
    cout<<plusOne(&a)<<endl;   //actual parameter
    cout<<a;
}
