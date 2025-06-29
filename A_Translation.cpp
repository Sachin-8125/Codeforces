#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n=s.length();
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}