#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int countA = count(str.begin(),str.end(),'A');
        int countB = count(str.begin(),str.end(),'B');
        if(countA > countB) cout<<"A\n";
        else  cout<<"B\n";
    }
}