// Default argument

#include <iostream>
using namespace ste;

int sum(int a=0, int b=0){   //default argument
     return a+b;
}

int main(){
    cout<<sum(7);
}