
#include <iostream>
using namespace std;

// call by reference
int plusone(int &num){      //formal argument
   num+=num+1;
   return num;
}

int main(){
    int a=10,num; 
    cout<<plusone(a)<<endl;    //actual argument
    cout<<a;
}