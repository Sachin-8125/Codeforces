#include <iostream>
#include <vector>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        vector<long> a(n); 
        for(long i = 0; i < n; i++){
            cin>>a[i];
        }
        long total=1;
        for(long i = 0; i < n; i++){
            long b; 
            cin>>b;
            total += (a[i] > b ? (a[i] - b) : 0);
        }
        cout<<total<<endl;
    }
}