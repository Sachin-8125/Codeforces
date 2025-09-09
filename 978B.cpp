#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    for(int i=2;i<n;i++){
        if(str[i]=='x'&&str[i-1]=='x'&&str[i-2]=='x') ans++;
    }
    cout<<ans<<endl;
    return 0;
}