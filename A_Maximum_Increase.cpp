#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
        } else{
            count=1;
        }
        if(count>max){
            max=count;
        }
    }
    cout<<max;
}