#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n; cin >> n;
    long long sum = 0, x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += abs(x);
    }
    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}

