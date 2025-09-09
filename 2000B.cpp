#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t t;
    cin >> t;
    while (t--) {
        int64_t n;
        cin >> n;
        int64_t x;
        cin >> x;
        int64_t left = x - 1, right = x + 1;
        bool rule = true;
        for (int64_t p = 1; p < n; ++p) {
            cin >> x;
            if (x == left) {
                --left;
            } else if (x == right) {
                ++right;
            } else {
                rule = false;
            }
        }
        cout << (rule ? "YES" : "NO") << '\n';
    }
    return 0;
}
