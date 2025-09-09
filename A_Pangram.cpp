#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        s[i] = tolower(s[i]);
    }
    int a[26]={0};
    for(int i=0; i<n; i++){
        a[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}