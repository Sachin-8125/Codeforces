#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,x=0,y=0,z=0;
    while(n--){
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 and y==0 and z==0) cout<<"YES\n";
    else cout<<"NO\n";
}