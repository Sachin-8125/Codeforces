#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    cout << min(2, n - 1) * m << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
}