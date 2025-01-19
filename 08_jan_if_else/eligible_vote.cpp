/*eligible  for vote or not*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your age :";
    cin>>a;
    
    if(a>=18){
        cout<<"you are eligible for vote";
    }
    else{
        cout<<"Not eligible";
    }
}