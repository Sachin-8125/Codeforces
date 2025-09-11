#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--) {
        long n, m, l, r;
        cin >> n >> m >> l >> r;
        long left = (l > -m ? l : -m);
        long right = left + m;
        cout << left << " " << right << "\n";
    }

    return 0;
}
