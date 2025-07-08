#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool exists = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == k) {
                exists = true;
            }
        }
        cout << (exists ? "YES" : "NO") << endl;
    }
    return 0;
}