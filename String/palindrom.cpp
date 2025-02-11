// palindrom 

#include <iostream>
using namespace std;
int main(){
    string s="madam";
    string ans=s;
    int j=s.length()-1;
    int i=0;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    if(s==ans){
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palindrom"<<endl;
    }
}