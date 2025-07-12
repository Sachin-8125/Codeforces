#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        vector<long long> a(3);
        for (auto& x : a) cin >> x;
        long long mx = *max_element(a.begin(), a.end());
        int cnt = count(a.begin(), a.end(), mx);
        for (auto x : a)
            cout << (mx == x ? (cnt == 1 ? 0 : 1) : mx - x + 1) << ' ';
        cout << '\n';
    }
}

