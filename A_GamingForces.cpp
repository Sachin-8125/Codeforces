#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x, ones = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            ones += (x == 1);
        }
        cout << n - ones + (ones + 1) / 2 << '\n';
    }
    return 0;
}