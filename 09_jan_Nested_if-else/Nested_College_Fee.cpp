#include <iostream>
using namespace std;
int main(){
    string colleg;
    cout<<"Entere your sage college name : \n ";
    cin>>colleg;

    if (colleg=="Sage"){
        cout<<"salect B.Com, MBA or B.tech to know fee :\n ";
        cin>>colleg;

        if(colleg=="B.Com"){
            cout<<"Your fee si 20000";
        }

        else if (colleg=="MBA"){
            cout<<"Your fee is 40000";
        }

        else if (colleg=="B.tech"){
            cout<<"your fee is 80000";
        }

        else{
            cout<<"your are from other department";
        }

    }
    else{
        cout<<"You are not frome Sage University";
    }

}
