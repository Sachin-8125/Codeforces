#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];
        set<int> used;
        for (int i = 0; i < n; i++) {
            if (used.find(x[i]) == used.end()) {
                used.insert(x[i]);
            } else if (used.find(x[i] + 1) == used.end()) {
                used.insert(x[i] + 1);
            }
        }
        cout << used.size() << "\n";
    }
    return 0;
}
