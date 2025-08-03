#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> m;
        for (auto &i : a) {
            cin >> i;
            ++m[i];
        }
        int ans = 0;
        for (auto &[k, v] : m) {
            ans += v / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}