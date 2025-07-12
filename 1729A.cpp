#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int ta = abs(a - 1), tb = abs(b - c) + abs(c - 1);
        cout << (ta == tb ? 3 : (ta < tb ? 1 : 2)) << endl;
    }
    return 0;
}