#include<iostream>
using namespace std;
int main() {
    long t; 
    cin>>t;
    while (t--) {
        int n, m = 10, z = 0; 
        long long p = 1;
        cin>>n;
        for (int i = 0, x; i < n; ++i) {
            cin>>x;
            if (x == 0) {
                ++z; continue; 
            }
            p *= x; 
            if (x < m) m = x;
        }
        if (z > 1) cout<<"0\n";
        else if (z) cout<<p<<endl;
        else cout<< p * (m + 1) / m<<endl;
    }
}