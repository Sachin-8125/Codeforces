#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> distinct_a;
    set<int> distinct_b;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        distinct_a.insert(val);
    }
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        distinct_b.insert(val);
    }
    size_t count_a = distinct_a.size();
    size_t count_b = distinct_b.size();
    if ((count_a == 1 && count_b <= 2) || (count_b == 1 && count_a <= 2)) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
