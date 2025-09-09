#include <iostream>
using namespace std;

int main() {
    int t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        cout << (n/2 * min(2*a, b) + (n%2)*a) << '\n';
    }
}
