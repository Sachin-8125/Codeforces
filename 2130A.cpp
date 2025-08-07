#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 0) ans += 1;
            else ans += x;
        }
        cout << ans << endl;
    }
    return 0;
}