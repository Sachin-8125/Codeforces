#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int prev;
        cin >> prev;
        bool perfect = true;
        for (int p = 1; p < n; ++p) {
            int x;
            cin >> x;
            int diff = abs(x - prev);
            if (diff != 5 && diff != 7) {
                perfect = false;
            }
            prev = x;
        }
        cout << (perfect ? "YES" : "NO") << '\n';
    }

    return 0;
}
