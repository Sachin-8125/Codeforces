#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s = "codeforces";
    while(t--){
        string str;
        cin>>str;
        int count=0;
        for(int i=0; i<10; i++){
            if(str[i]!=s[i]) count++;
        }
        cout<<count<<"\n";
    }
}