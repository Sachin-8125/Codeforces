#include <iostream>
using namespace std;
int main() {
    int Q=0,QA=0,QAQ=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Q'){
            Q++;
            QAQ+=QA;
        }
        else if(s[i]=='A')
            QA+=Q;
    }
    cout<<QAQ<<endl;
}