// Multilevel Inheritance

#include <iostream>
using namespace std;

class grandparent{
    public:
    int a=20;
    void show(){
        cout<<a;
    }
};

class parent:public grandparent{

    public:
    void show(){
        cout<<" a = "<<a;
    }
};

class child: public parent{

};

int main(){

    child obj;
    obj.show();
}