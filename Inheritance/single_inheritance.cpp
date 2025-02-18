// single inheritance

#include <iostream>
using namespace std;

class parent{
    public:
    int a=20;
};

class child:public parent{

    public:
    void show(){
        cout<<a;
    }
};

int main(){
    child obj;
    obj.show();
}
