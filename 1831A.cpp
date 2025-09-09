#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        for (long p = 0; p < n; p++) {
            long x;
            cin >> x;
            cout << (n + 1 - x) << " ";
        }
        cout << "\n";
    }
    return 0;
}
