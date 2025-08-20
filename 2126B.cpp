#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        bool b = 0;
        long z=0,count=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a||b){
                b=z=0;
                continue;
            }
            ++z;
            if(z>=k){
                ++count;
                z=0;
                b=1;
            }
        }
        cout<<count<<endl;
        
    }
}