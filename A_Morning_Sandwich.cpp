#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b,c,h;
        cin>>b>>c>>h;
        c+=h;
        int ans = 0;
        if(b>=c+1) ans=2*c+1;
        else ans=2*b-1;
        cout<<ans<<endl;
    }
    return 0;
}
