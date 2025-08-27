#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int plus=0,minus=0;
        for(int i=0;i<n;i++){
            str[i]=='+' ? plus++ : minus++;
        }
        cout<<abs(plus-minus)<<endl;
    }
    return 0;
}