#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = 0;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str[0]=='X'){
            str[2]=='+' ? x++ : x--;
        }else if(str[2]=='X'){
            str[0]=='+'?++x:--x;
        }
    }
    cout<<x<<endl;
}