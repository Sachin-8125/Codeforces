#include<iostream>
using namespace std;
using ll = long long;
int main(){
    ll a,b;
    cin>>a>>b;
    ll A = 1, B = 1;
    for(ll i=2; i<=min(a,b); i++){
        A *= i;
    }
    cout<<A<<endl;
    return 0;
}