// Find the majority element in the given array
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count = 1, res = 0;
    for(int i=1;i<n;i++){
        if(arr[res] == arr[i]) count++;
        else count--;
        if(count == 0){
            res = i;
            count = 1;
        }
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(arr[res] == arr[i]) count++;
    }
    if(count > n/2) cout<<arr[res]<<endl;
    else cout<<"No majority element"<<endl;
    return 0;
}