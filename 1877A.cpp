#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll temp,sum=0;
        while(--n){
            cin>>temp;
            sum += temp;
        }
        cout<<-sum<<endl;
    }
}