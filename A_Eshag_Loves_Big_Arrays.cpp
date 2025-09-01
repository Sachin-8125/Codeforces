#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int mn = 101;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > mn) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
