#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int mina = INT_MAX, minb = INT_MAX;
    for (int &x : a) { cin >> x; mina = min(mina, x); }
    for (int &x : b) { cin >> x; minb = min(minb, x); }
    long long total = 0;
    for (int i = 0; i < n; ++i)
        total += max(a[i] - mina, b[i] - minb);
    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}