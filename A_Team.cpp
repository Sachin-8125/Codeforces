#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        int temp = 0;
        int p,v,t;
        cin>>p>>v>>t;
        if(p+v+t>=2) count++;
    }
    cout<<count<<endl;
}