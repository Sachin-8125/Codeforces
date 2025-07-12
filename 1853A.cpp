#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool sorted = true;
        int minnum = 1e9 + 7, prev, x;
        cin >> prev;
        for (int i = 1; i < n; ++i) {
            cin >> x;
            if (prev <= x)
                minnum = min(minnum, 1 + (x - prev) / 2);
            else
                sorted = false;
            prev = x;
        }
        cout << (sorted ? minnum : 0) << '\n';
    }
}