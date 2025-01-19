#include <iostream>
using namespace std;
int main(){
    string light;
    cout<<"enter the traffic light color to know about the condition : \n";
    cin>>light;

    if (light=="Red"){
        cout<<"Are ruko jara";
    }

    else if (light=="Green"){
        cout<<"chalte jao";
    }

    else if (light=="Yellow"){
        cout<<"chalne ke liye ready ho jao";
    }

    else {
        cout<<"sahi color likho";
    }
}