//1 lakh - 50k 15%
//50k - 30k 10%
//30k - 0k 5%

#include <iostream>
using namespace std;

int main(){
    int salary,gst=0;
    cout<<"Enter your salary: ";
    cin>>salary;    
    if (salary<=100000 && salary>50000){
        //1 lakh - 50k 15%
        gst = salary*0.15;
        cout<<"GST is: "<<gst<<endl;
        cout<<"Net Salary is: "<<salary-gst<<endl;

    }
    else if (salary<=50000 && salary>30000){
        //50k - 30k 10%
        gst = salary*0.10;
        cout<<"GST is: "<<gst<<endl;
        cout<<"Net Salary is: "<<salary-gst<<endl;
    }
    else if (salary<=30000 && salary>0){
        //30k - 0k 5%
        gst = salary*0.05;
        cout<<"GST is: "<<gst<<endl;
        cout<<"Net Salary is: "<<salary-gst<<endl;
    }
    else
    {
        cout<<"invalid salary";
    }
    

}