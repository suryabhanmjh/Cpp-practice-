/*Percentage grade A=80%, B=60-80%. C=30-60%, D0-30%*/
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter your percentage :";
    cin>>a;
    
    if(a<=100 && a>80){
        cout<<"A great";
    }
    else if(a<=80 && a>60){
        cout<<"B great ";
    }
    else if (a<=60 && a>30){
        cout<<"C great";
    }
    else if(a<=30 && a>=0){
        cout<<"D great ";
    }
    else{
        cout<<"Errors";
    }

    return 0;
}