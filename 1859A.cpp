#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int mx = 0;
        for (auto& x : a) {
            cin >> x;
            mx = max(mx, x);
        }
        vector<int> b, c;
        for (auto x : a)
            (x < mx ? b : c).push_back(x);

        if (!b.empty()) {
            cout << b.size() << ' ' << c.size() << '\n';
            for (auto x : b) cout << x << ' '; cout << '\n';
            for (auto x : c) cout << x << ' '; cout << '\n';
        } else {
            cout << "-1\n";
        }
    }
}
