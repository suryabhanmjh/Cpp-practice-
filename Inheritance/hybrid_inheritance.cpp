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

class parent1:public grandparent{
    public:
    void show(){
        cout<<"parent1 show"<<endl;
    }
};

class child: public parent, public parent1, public grandparent{
    public:
    void show(){
        cout<<"child show"<<endl;
    }
};

int main(){

    child obj;
    obj.show();
    obj.parent::show();
    obj.parent1::show();
    obj.grandparent::show();
}