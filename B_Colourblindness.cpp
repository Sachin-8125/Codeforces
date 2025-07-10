#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i] && !(a[i] == 'B' && b[i] == 'G') && !(a[i] == 'G' && b[i] == 'B')) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}