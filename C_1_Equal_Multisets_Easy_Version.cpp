#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    int L = n - k + 1;
    int R = k;

    vector<bool> in_middle_a(n + 1, false);
    if (L <= R) {
        for (int i = L; i <= R; i++) {
            in_middle_a[a[i]] = true;
        }
    }

    vector<bool> seen_in_b(n + 1, false);

    for (int i = 1; i <= n; i++) {
        if (b[i] == -1) continue;

        if (i < L || i > R) {
            if (b[i] != a[i]) {
                cout << "NO\n";
                return;
            }
        } else {
            if (!in_middle_a[b[i]] || seen_in_b[b[i]]) {
                cout << "NO\n";
                return;
            }
            seen_in_b[b[i]] = true;
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}