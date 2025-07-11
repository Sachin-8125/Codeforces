#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int x) {
    int n = a.size();
    int dist = max(a[0] - 0, 2 * (x - a[n - 1]));
    for (int i = 1; i < n; i++) {
        dist = max(dist, a[i] - a[i - 1]);
    }
    return dist;
}

int main() {
    int t;
    cin >> t;

    for (int zz = 0; zz < t; zz++) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int res = solve(a, x);
        cout << res << endl;
    }
}