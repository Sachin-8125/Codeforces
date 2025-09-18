#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
        int mx = s - r;
        cout << mx << " ";
        n--;
        vector<int> res;
        for (int i = 0; i < n; ++i) {
            int x = min(mx, r - (n - i - 1));
            res.push_back(x);
            r -= x;
        }
        for (int x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}
