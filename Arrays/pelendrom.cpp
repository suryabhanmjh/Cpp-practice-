// find pelendrom in an array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,2,1,};
   int i=0;
   int j=5;
   while(i<j){
       if(arr[i]!=arr[j]){
           cout<<"Not pelendrom";
           return 0;
       }
       i++;
       j--;
   }
    cout<<"Pelendrom";
}

// done