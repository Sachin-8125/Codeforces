#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l,r,d,u;
    while(t--){
        cin>>l>>r>>d>>u;
        if(l==r && l==d && d==u) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}