#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool flag = false;
    for(char ch: str){
        if(ch=='H' || ch=='Q' || ch=='9'){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}