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
        string s1, s2;
        cin >> s1 >> s2;

        bool blocked = false;
        for (int i = 0; i < n; i++) {
            if (s1[i] == '1' && s2[i] == '1') {
                blocked = true;
                break;
            }
        }

        cout << (blocked ? "NO\n" : "YES\n");
    }
    return 0;
}
