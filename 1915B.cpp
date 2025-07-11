#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s[3];
        for(int i=0;i<3;i++){
            cin>>s[i];
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(s[i][j]=='?'){
                    if(s[i].find('A')==string::npos){
                        s[i][j]='A';
                    }else if(s[i].find('B')==string::npos){
                        s[i][j]='B';
                    }else {
                        s[i][j]='C';
                    }
                    cout<<s[i][j]<<endl;
                }
            }
        }
    }
    return 0;
}