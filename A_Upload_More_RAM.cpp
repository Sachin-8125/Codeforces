#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    cout << (n - 1) * k + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
