#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = n / 3;
        int rem = n % 3;
        if (rem == 0) {
            cout << ans << " " << ans + 1 << " " << ans - 1 << endl;
        } else if (rem == 1) {
            cout << ans << " " << ans + 2 << " " << ans - 1 << endl;
        } else {
            cout << ans + 1 << " " << ans + 2 << " " << ans - 1 << endl;
        }
    }
    return 0;
}
