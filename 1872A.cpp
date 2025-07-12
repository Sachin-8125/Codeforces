#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a > b) swap(a, b);
        int ans = ((b - a + 1) / 2 + c - 1) / c;
        cout << ans << '\n';
    }
}