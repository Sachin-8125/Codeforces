#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << ((a + b) % 2 ? "Alice\n" : "Bob\n");
    }
    return 0;
}
