#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p = 1;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cout << p << " ";
            p += 2; // next odd number
        }
        cout << endl;
    }
    return 0;
}