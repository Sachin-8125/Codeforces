#include<iostream>
#include<vector>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        vector<long> a(n),b(n);
        for(long i = 0; i < n; i++){
            cin>>a[i];
        }
        for(long i = 0; i < n; i++){
            cin>>b[i];
        }
        long mxa=-1, mxb=-1;
        for(long i = 0; i < n; i++){
            long x = (a[i] < b[i]) ? a[i] : b[i];
            long y = (a[i] > b[i]) ? a[i] : b[i];
            mxa = (mxa > x) ? mxa : x;
            mxb = (mxb > y) ? mxb : y;
        }
        cout<<mxa*mxb<<endl;
    }
}
