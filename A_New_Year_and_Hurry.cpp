#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int res = 240-k;
    int count = 0;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i*5;
        if(sum>res) break;
        count++;
    }
    cout<<count<<endl;
}