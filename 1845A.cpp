#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n" << n << '\n';
            for (int i = 0; i < n; ++i) cout << "1 ";
            cout << '\n';
        } else if (k == 1) {
            cout << "NO\n";
        } else if (k == 2) {
            if (n % 2 == 0) {
                cout << "YES\n" << n / 2 << '\n';
                for (int i = 0; i < n / 2; ++i) cout << "2 ";
                cout << '\n';
            } else {
                cout << "NO\n";
            }
        } else {
            if (n % 2 == 0) {
                cout << "YES\n" << n / 2 << '\n';
                for (int i = 0; i < n / 2; ++i) cout << "2 ";
                cout << '\n';
            } else {
                int cnt = 1 + (n - 3) / 2;
                cout << "YES\n" << cnt << '\n' << "3 ";
                for (int i = 1; i < cnt; ++i) cout << "2 ";
                cout << '\n';
            }
        }
    }
    return 0;
}