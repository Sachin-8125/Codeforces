#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, s, m, prev = 0;
        bool res = false;
        cin >> n >> s >> m;
        for (int i = 0; i < n; ++i) {
            long l, r;
            cin >> l >> r;
            if (prev + s <= l) res = true;
            prev = r;
        }
        if (prev + s <= m) res = true;
        cout << (res ? "YES\n" : "NO\n");
    }
}
