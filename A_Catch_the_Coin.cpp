#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;
        cout << (y >= -1 ? "YES" : "NO") << '\n';
    }
    return 0;
}
