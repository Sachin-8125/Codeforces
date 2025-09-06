#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        ll r, b, d;
        cin >> r >> b >> d;
        ll differ = abs(r-b);
        ll mini = min(r,b);
        ll each = ( differ + mini - 1) / mini ;
        if(each <= d) cout << "YES" << endl;
        else cout << "NO" << endl ;
    }
    return 0;
}