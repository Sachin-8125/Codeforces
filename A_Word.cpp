#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int uCount=0,lCount=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            lCount++;
        }
        else{
            uCount++;
        }
    }
    if(lCount>=uCount){
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
    }
    else{
        for(int i=0;i<str.length();i++){
            str[i]=toupper(str[i]);
        }
    }
    cout<<str;
    return 0;
}