/*According to employees salary. The purchase the product. 
1) If the salary is between to 10000 to 50000. They purchased mobile or laptop. 
They select amount rate of interest and time. Then they get proper amount. 
Similarly if there salary is between 50000 to 100000.
They purchased TV or friend
And similarly if there salary is between 1lakh to 5 lakh. they purchased bike or car*/

#include <iostream>
using namespace std;
int main(){
    int salary;
       cout<<"Enter the salary : ";
       cin>>salary;

       if(salary>=10000 && salary<50000){
            string product;
              cout<<"Select the option: Mobile Or Laptop: ";
              cin>>product;

              if (product=="Mobile"){
                  int amount, rate, month;
                  cout<<"Enter the amount: ";
                  cin>>amount;
                  cout<<"Enter the rate: ";
                  cin>>rate;
                  cout<<"Enter the month: ";
                  cin>>month;
                   
                  float time = month/12;
                  int interest = (amount*rate*time)/100;
                  cout<<"The interest on mobile amount of "<<amount<<" for "<<month<<" month at "<<rate<<" % annual intres is "<<interest<<endl;
                  cout<<"The total amount is ₹"<<amount+interest;
              }

              else if (product=="Laptop"){
                  int amount, rate, month;
                  cout<<"Enter the amount: ";
                  cin>>amount;
                  cout<<"Enter the rate: ";
                  cin>>rate;
                  cout<<"Enter the month: ";
                  cin>>month;
                  
                  float time = month/12;
                  int interest = (amount*rate*time)/100;
                  cout<<"The interest on laptop amount of "<<amount<<" for "<<month<<" month at "<<rate<<" % annual intres is "<<interest<<endl;
                  cout<<"The total amount is "<<amount+interest;
              }

              else{
                  cout<<"No option for purchase";
              }
       }

       else if(salary>=50000 && salary<100000){
            string product;
              cout<<"Select the option: TV Or Fridge: ";
              cin>>product;

              if(product=="TV"){
                  int amount, rate, month;
                  cout<<"Enter the amount: ";
                  cin>>amount;
                  cout<<"Enter the rate: ";
                  cin>>rate;
                  cout<<"Enter the month: ";
                  cin>>month;
                  
                  float time = month/12;
                  int interest = (amount*rate*time)/100;
                  cout<<"The interest on TV amount of "<<amount<<" for "<<month<<" month at "<<rate<<" % annual intres is "<<interest<<endl;
                  cout<<"The total amount is "<<amount+interest;
              }

              else if(product=="Fridge"){
                  int amount, rate, month;
                  cout<<"Enter the amount: ";
                  cin>>amount;
                  cout<<"Enter the rate: ";
                  cin>>rate;
                  cout<<"Enter the month: ";
                  cin>>month;
                  
                  float time = month/12;
                  int interest = (amount*rate*time)/100;
                  cout<<"The interest on Fridge amount of "<<amount<<" for "<<month<<" month at "<<rate<<" % annual intres is "<<interest<<endl;
                  cout<<"The total amount is "<<amount+interest;
              }

              else{
                  cout<<"No option for purchase";
              }
       }

       else if(salary>=100000 && salary<500000){
            string product;
              cout<<"Select the option: Bike Or Car: ";
              cin>>product;

              if(product=="Bike"){
                  int amount, rate, month;
                  cout<<"Enter the amount: ";
                  cin>>amount;
                  cout<<"Enter the rate: ";
                  cin>>rate;
                  cout<<"Enter the month: ";
                  cin>>month;
                  
                  float time = month/12;
                  int interest = (amount*rate*time)/100;
                  cout<<"The interest on Bike amount of "<<amount<<" for "<<month<<" month at "<<rate<<" % annual intres is "<<interest<<endl;
                  cout<<"The total amount is "<<amount+interest;
              }

              else if(product=="Car"){
                  int amount, rate, month;
                  cout<<"Enter the amount: ";
                  cin>>amount;
                  cout<<"Enter the rate: ";
                  cin>>rate;
                  cout<<"Enter the month: ";
                  cin>>month;
                  
                  float time = month/12;
                  int interest = (amount*rate*time)/100;
                  cout<<"The interest on Car amount of "<<amount<<" for "<<month<<" month at "<<rate<<" % annual intres is "<<interest<<endl;
                  cout<<"The total amount is "<<amount+interest;
              }

              else{
                  cout<<"No option for purchase";
              }
       }

       else{
           cout<<"No option for purchase";
       }
}