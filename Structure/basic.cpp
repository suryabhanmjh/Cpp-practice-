#include <iostream>
using namespace std;

struct Student{

    private:
    int roll;
    string name;

    public:
    void setRoll(int r, string n){
        roll = r;
        name = n;
        cout<<"Roll: "<<roll<<"  ";
        cout<<"Name: "<<name<<endl;
    }
}obj;

int main(){
    Student a;
    a.setRoll(101, "John");

    Student b;
    obj.setRoll(102, "Doe");
}