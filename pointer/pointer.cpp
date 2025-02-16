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
    }
    void show(){
        cout<<"Roll: "<<roll<<"  ";
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    Student *var1;
    Student var2;
    var2.setRoll(102, "Doe");

    var1=&var2;
    var1->show();
}