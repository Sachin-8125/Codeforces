#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum>=a+10 || sum>=b+10 || sum>=c+10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}