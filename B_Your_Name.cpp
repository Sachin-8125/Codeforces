#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string r,s;
    while(t--){
        cin>>n>>r>>s;
        sort(r.begin(),r.end());
        sort(s.begin(),s.end());
        if(r==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}