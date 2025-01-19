/* There is restaurant name is "Milan" If user salec Milan then he get option to chose "Dinner🍽, Sweetest, Lunch🍝🥗🍱"
Other wise show "no potion for eats".
The options are:
Milan -> Dinner -> Thali -> 500₹
Milan -> Dinner -> Bufe -> 800₹ 
Milan -> Sweets -> GulabJamun -> 20₹ 
Milan -> Sweets -> RasMalai -> 40₹ 
Milan -> Lunch -> Thali -> 300₹ 
Milan -> Lunch -> Bufe -> 500₹ */

#include <iostream>
using namespace std;
int main(){
    string restaurant;
    cout<<"Enter the restaurant name: ";
    cin>>restaurant;

    if (restaurant=="Milan"){
        cout<<"Select the option: Dinner, Sweets, Lunch: ";
        cin>>restaurant;

        if (restaurant=="Dinner"){
            cout<<"Select the option: Thali, Bufe: ";
            cin>>restaurant;

            if (restaurant=="Thali"){
                cout<<"The amount is 500₹";
            }
            else if (restaurant=="Bufe"){
                cout<<"The amount is 800₹";
            }
            else{
                cout<<"No option for eats";
            }
        }
        else if (restaurant=="Sweets"){
            cout<<"Select the option: GulabJamun, RasMalai: ";
            cin>>restaurant;

            if (restaurant=="GulabJamun"){
                cout<<"The amount is 20₹";
            }
            else if (restaurant=="RasMalai"){
                cout<<"The amount is 40₹";
            }
            else{
                cout<<"No option for eats";
            }
        }
        else if (restaurant=="Lunch"){
            cout<<"Select the option: Thali, Bufe: ";
            cin>>restaurant;

            if (restaurant=="Thali"){
                cout<<"The amount is 300₹";
            }
            else if (restaurant=="Bufe"){
                cout<<"The amount is 500₹";
            }
            else{
                cout<<"No option for eats";
            }
        }
        else{
            cout<<"No option for eats";
        }
    }
    else{
        cout<<"No option for eats";
    }
}