#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t t;
    cin >> t;
    while (t--) {
        int64_t n, k;
        cin >> n >> k;
        int64_t s = 0, cnt = 0;
        for (int64_t p = 0; p < n; ++p) {
            int64_t x;
            cin >> x;
            if (x >= k) {
                s += x;
            } else if (x == 0 && s) {
                --s;
                ++cnt;
            }
        }
        cout << cnt << '\n';
    }
}