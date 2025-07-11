#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string ans = "";
        for(int i=0;i<str.size()-2;i++){
            ans += str[i];
        }
        ans += "i";
        cout<< ans <<endl;
    }
    return 0;
}