#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> apps(n);
        for (int i = 0; i < n; ++i) cin >> apps[i].first;
        for (int i = 0; i < n; ++i) cin >> apps[i].second;
        sort(apps.begin(), apps.end());
        for (int i = 0; i < n; ++i) {
            if (k >= apps[i].first)
                k += apps[i].second;
        }
        cout << k << endl;
    }
    return 0;
}
