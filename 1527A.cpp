#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p = 1;
        while (p <= n) p <<= 1;
        cout << (p >> 1) - 1 << '\n';
    }
}