#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}