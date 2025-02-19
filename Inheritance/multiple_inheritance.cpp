#include <iostream>
using namespace std;

class grandparent{
    public:
    grandparent(){
        cout<<"grandparent constructor"<<endl;
    }
    
};

class parent{
    public:
    parent(){
        cout<<"parent constructor"<<endl;
    }
};

class child: public grandparent, public parent{
    public:
    child(){
        cout<<"child constructor"<<endl;
    }
};

int main(){

    child obj;
}