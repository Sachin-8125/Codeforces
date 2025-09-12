#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (l == -1) l = i;
                r = i;
            }
        }
        int ans = 0;
        for (int i = l; i <= r; i++) {
            if (a[i] == 0) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}