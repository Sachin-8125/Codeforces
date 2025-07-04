#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        s[0] = tolower(s[0]);
        s[1] = tolower(s[1]);
        s[2] = tolower(s[2]);
        if(s[0]=='y' && s[1]=='e' && s[2]=='s'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}