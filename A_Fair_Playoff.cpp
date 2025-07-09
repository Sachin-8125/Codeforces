#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        vector<int> a(4);
        for (int &x : a) cin >> x;
        int m1 = max(a[0], a[1]), m2 = max(a[2], a[3]);
        sort(a.begin(), a.end());
        cout << ((m1 > m2 ? m1 : m2) == a[3] && (m1 < m2 ? m1 : m2) == a[2] ? "YES\n" : "NO\n");
    }
}