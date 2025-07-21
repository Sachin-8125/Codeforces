#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        x = max(x-a,0);
        y = max(y-b,0);
        if(x+y<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}