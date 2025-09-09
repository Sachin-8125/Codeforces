#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + (c % 2) > b ? "First\n" : "Second\n");
    }
    return 0;
}