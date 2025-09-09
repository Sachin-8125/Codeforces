#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, n, count = 0;
        cin >> a >> b >> n;
        while (a + b <= n) {
            if (a > b) b += a;
            else a += b;
            count++;
        }
        cout << count + 1 << endl;
    }
    return 0;
}