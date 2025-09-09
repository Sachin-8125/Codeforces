#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int d = n % 10, len = 0, temp = n;
        while (temp) len++, temp /= 10;
        cout << (d - 1) * 10 + len * (len + 1) / 2 << endl;
    }
    return 0;
}