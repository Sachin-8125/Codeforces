#include <iostream>
#include <climits>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x, mi = INT_MAX, ma = INT_MIN;
        cin >> n;
        while (n--) {
            cin >> x;
            mi = min(mi, x);
            ma = max(ma, x);
        }
        cout << ma - mi << '\n';
    }
    return 0;
}