/*IF no is greater than 0 and less than 20 print Sq of np, and if no. is betw 20 to 50 add 10 and if no. is above 50 sub 10*/

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    
    if(num>0 && num<20){
        cout<<num*num<<" is square of numbers.";
    }
    else if(num>=20 && num <50){
        cout<<num+10;
    }
    else if (num>50){
        cout<<num-10;
    }
    else{
        cout<<"negative no";
    }
}