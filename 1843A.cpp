#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int &x : v) cin >> x;
        
        sort(v.begin(), v.end());

        long long ans = 0;
        for (int l = 0, r = n - 1; l < r; ++l, --r)
            ans += v[r] - v[l];
        
        cout << ans << '\n';
    }
    return 0;
}
