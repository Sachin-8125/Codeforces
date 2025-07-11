#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        int oddCount = 0;
        for(int i=0;i<2*n;i++){
            if(arr[i]%2!=0){
                oddCount++;
            }
        }
        if(oddCount==n){
            cout<< "Yes"<<endl;
        }else{
            cout<< "No"<<endl;
        }
    }
}