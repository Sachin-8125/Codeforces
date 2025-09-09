#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxi = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,s[i]-'a'+1);
        }
        cout<<maxi<<endl;
    }
    return 0;
}