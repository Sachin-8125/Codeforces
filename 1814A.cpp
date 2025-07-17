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
        bool res = (n % 2 == 0) || ((n - k) % 2 == 0);
        cout << (res ? "YES" : "NO") << '\n';
    }
    return 0;
}
