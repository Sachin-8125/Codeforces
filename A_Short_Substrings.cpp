#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string t="";
        t+=s[0];
        for(int i=1;i<s.size()-1;i+=2){
            t+=s[i];
        }
        t+=s.back();
        cout<<t<<endl;
    }
    return 0;
}