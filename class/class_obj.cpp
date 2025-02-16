#include <iostream>
using namespace std;

class Student{

    public:
    int a;

    
    void show(){
        cout<<"Value of a = "<<a<<endl;
    }
    
};

int main(){
    Student obj1;
    Student obj2;
    cout<<"Value of a = ";
    cin>>obj1.a;
    cout<<"Value of a = ";
    cin>>obj2.a;
    obj1.show();
    obj2.show();

    //cout<<"Value of a = "<<obj1.a<<endl;
    //cout<<"Value of a = "<<obj2.a<<endl;