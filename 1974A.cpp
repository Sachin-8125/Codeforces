#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long x, y;
        cin >> x >> y;

        long z = (y + 1) / 2;
        x -= (15 * z - 4 * y);
        if (x < 0) x = 0;
        z += (x + 14) / 15;

        cout << z << '\n';
    }
    return 0;
}