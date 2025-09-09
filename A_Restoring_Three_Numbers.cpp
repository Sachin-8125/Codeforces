#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int maxi = max({arr[0],arr[1],arr[2],arr[3]});
    for(int i=0;i<4;i++){
        if(arr[i]!=maxi) cout<<maxi-arr[i]<<" ";
    }
    return 0;
}