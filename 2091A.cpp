#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        map<int, int> freq;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] == 0 || a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 5) {
                ++freq[a[i]];
            }
            ++ans;

            if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1) {
                break;
            }
        }

        // Check again if condition is satisfied
        if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1) {
            cout << ans << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}
