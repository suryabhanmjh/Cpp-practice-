// find dupilcate in an array of n+1 integers
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,1,4,5,6,2,3,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        bool check=true;
        for(int j=i+1;j<size;j++){
        if(arr[j]==arr[i]){
            arr[j]=-1;
            check=false;
            }
            
            }
            if (check==false && arr[i]!=-1){
                cout<<arr[i]<<" ";
            }
    }

    }

// done

    