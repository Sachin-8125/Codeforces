#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            if (a > b) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}