#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n + 1);

        for (int i = 1; i <= n; ++i)
            cin >> a[i];

        if (k >= 2) {
            cout << "YES\n";
        } else {
            int base = a[j];
            int max_strength = *max_element(a.begin() + 1, a.begin() + n + 1);
            if (base == max_strength)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
