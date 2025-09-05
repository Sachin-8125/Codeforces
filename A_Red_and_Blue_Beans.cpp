#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, b, d;
        cin >> r >> b >> d;
        int max_color = max(r, b);
        int min_color = min(r, b);
        if (max_color <= min_color * (d + 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
