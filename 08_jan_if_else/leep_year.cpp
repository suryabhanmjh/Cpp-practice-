/*leep year find*/
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<year<<" is a leep year.";
    }
    else{
        cout<<year<<" is not a leep year.";
    }
}