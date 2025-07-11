#include <iostream>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        int odd = 0, even = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            (x % 2) ? odd++ : even++;
        }
        cout << ((odd && (even || n % 2)) ? "YES" : "NO") << endl;
    }
    return 0;
}