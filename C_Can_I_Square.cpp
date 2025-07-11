#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        long long b=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b+=a[i];
        }

        long long s=sqrt(b);
        if(s*s==b){
            cout<< "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }
    }

    return 0;
}