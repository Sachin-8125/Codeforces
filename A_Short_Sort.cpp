#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s[0]=='b'&&s[2]=='a') || (s[0]=='c'&&s[2]=='b')) cout<<"NO\n";
        else cout<<"YES\n";
    }
}