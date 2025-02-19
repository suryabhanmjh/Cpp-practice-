#include <iostream>
using namespace std;

class grandparent{
    public:
    void show(){
        cout<<"grandparent show"<<endl;
    }
};

class parent:public grandparent{
    public:
    void show(){
        cout<<"parent show"<<endl;
    }
};

class child: public parent{
    public:
    void show(){
        cout<<"child show"<<endl;
    }
};

int main(){

    child obj;
    obj.show();
    // obj.parent::show();
    parent obj1;
    obj1.show();
    obj.grandparent::show();
}

