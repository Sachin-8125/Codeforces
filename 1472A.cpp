#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
        int total = 1;
        while (w % 2 == 0) {
            w /= 2;
            total *= 2;
        }
        while (h % 2 == 0) {
            h /= 2;
            total *= 2;
        }
        cout << (total >= n ? "YES" : "NO") << endl;
    }
    return 0;
}