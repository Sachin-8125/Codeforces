#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), res;
    set<int> seen;
    for (int i = 0; i < n; ++i) cin >> a[i];
    // Traverse from back, keep track of unique elements
    for (int i = n - 1; i >= 0; --i) {
        if (seen.count(a[i]) == 0) {
            res.push_back(a[i]);
            seen.insert(a[i]);
        }
    }
    // Reverse to restore the original order of rightmost elements
    reverse(res.begin(), res.end());
    cout<<res.size()<<endl;
    for (int num : res) cout << num << ' ';
    cout << endl;
    return 0;
}
