#include <iostream>
using namespace std;
int main(){
    int num1,num2,results;
    cout<<"Enter a num : ";
    cin>>num1;
    cout<<"Enter second num : ";
    cin>>num2;
    cout<<"Enter 1 for add, 2 for sub, 3 for multiple : ";
    cin>>results;
    
    if(results==1){
        cout<<num1+num2;
    }
    else if (results==2){
        cout<<num1-num2;
    }
    else if (results ==3){
        cout<<num1*num2;
    }
    else{
        cout<<"invalid input";
    }

}