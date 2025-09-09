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
        string s;
        cin >> s;

        unordered_set<string> seen;
        seen.reserve(n - 1);

        for (int i = 0; i + 1 < n; ++i) {
            string pair2;
            pair2.push_back(s[i]);
            pair2.push_back(s[i + 1]);
            seen.insert(pair2);
        }

        cout << seen.size() << '\n';
    }

    return 0;
}
