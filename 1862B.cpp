#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n), ans;
    for (auto &x : arr) cin >> x;
    ans.push_back(arr[0]);
    for (int i = 1; i < n; ++i) {
        if (arr[i] >= arr[i-1])
            ans.push_back(arr[i]);
        else
            ans.insert(ans.end(), {1, arr[i]});
    }
    cout << ans.size() << '\n';
    for (auto x : ans) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
