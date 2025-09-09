#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, a[4];
        cin >> x >> a[1] >> a[2] >> a[3];
        int opened = 0;
        for (int i = 0; i < 2; ++i) {
            if (a[x] == 0) {
                opened = 1;
                break;
            }
            x = a[x];
        }
        cout << (opened ? "NO" : "YES") << endl;
    }
    return 0;
}