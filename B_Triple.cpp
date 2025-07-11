#include <iostream>
#include <vector>
#include <unordered_map>
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
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int ans = -1;
        for (auto &p : freq) {
            if (p.second >= 3) {
                ans = p.first;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
