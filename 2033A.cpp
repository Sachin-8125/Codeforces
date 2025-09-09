#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        auto n = abs([]{ int x; cin >> x; return x; }());
        cout << (n % 2 ? "Kosuke" : "Sakurako") << '\n';
    }
}
