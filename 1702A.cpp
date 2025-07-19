#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long digits = to_string(n).size();
    long long powerOf10 = 1;
    while (--digits) powerOf10 *= 10;

    cout << n - powerOf10 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}