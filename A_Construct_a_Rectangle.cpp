#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b) {
            cout << "YES" << endl;
        } else if ((a == b && c % 2 == 0) ||
                   (b == c && a % 2 == 0) ||
                   (a == c && b % 2 == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
