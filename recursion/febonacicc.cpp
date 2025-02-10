// find febonacii of a number using recursion

#include <iostream>
using namespace std;
int febonacii(int n){
    if(n==0 || n==1){
        return n;
    }
    return febonacii(n-1)+febonacii(n-2);
}

int main(){
    for(int i=0;i<10;i++)
    cout<<febonacii(i)<<endl;
    return 0;
}