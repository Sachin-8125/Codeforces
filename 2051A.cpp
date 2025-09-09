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
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &y : b) cin >> y;

        int ans = 0;
        for(int i = 0; i < n - 1; ++i) {
            if(a[i] > b[i + 1]) ans += (a[i] - b[i + 1]);
        }
        ans += a[n - 1];
        cout << ans << endl;
    }
    return 0;
}