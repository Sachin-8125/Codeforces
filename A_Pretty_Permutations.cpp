#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 == 0) {
            for (int i = 1; i <= n; i += 2)
                cout << i + 1 << " " << i << " ";
        } else {
            for (int i = 1; i <= n - 3; i += 2)
                cout << i + 1 << " " << i << " ";
            cout << n - 1 << " " << n << " " << n - 2;
        }
        cout << '\n';
    }
}