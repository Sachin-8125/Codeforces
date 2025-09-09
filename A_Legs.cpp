#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        count += n/4;
        n -= (n/4)*4;
        count += n/2;
        n -= (n/2)*2;
        count += n;
        cout<<count<<endl;
    }
}