#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n *= 2;

        vector<int> a(n);
        for (auto& x : a) cin >> x;

        unordered_set<int> seen;
        vector<int> res;

        for (int i = n - 1; i >= 0; --i) {
            if (seen.insert(a[i]).second)  // if insertion is successful
                res.push_back(a[i]);
        }

        ranges::reverse(res);
        for (int x : res) cout << x << ' ';
        cout << '\n';
    }
}
