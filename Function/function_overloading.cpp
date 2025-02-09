// Function over loading

#include <iostream>
using namespace std;

    int sum(int a){
        return a;
    }

    int sum(int a, int b){
        return a+b;
    }

    int sum(int a, int b, int c){
        return a+b+c;
    }

int main(){
    cout<<sum(10)<<endl;
    cout<<sum(10,20)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(10,20,20)<<endl;
}