#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long res = min(min(a,b),(a+b)/4);
        cout<<res<<endl;
    }
    return 0;
}