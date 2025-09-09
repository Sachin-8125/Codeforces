#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int32_t n;
    while(t--){
        cin>>n;
        int32_t a[n];
        for(int32_t i = 0; i < n; i++) cin>>a[i];
        int32_t min = a[0];
        for(int32_t i = 1; i < n; i++){
            if(a[i] < min) min = a[i];
        }
        int32_t moves = 0;
        for(int32_t i = 0; i < n; i++) moves += a[i] - min;
        cout<<moves<<endl;
    }
}