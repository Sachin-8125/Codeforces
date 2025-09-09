#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string x, y;
        cin >> n >> x >> y;
        int plus = 0, minus = 0;
        for (int i = 0; i < n; ++i) {
            if (x[i] == '1' && y[i] == '0') ++plus;
            else if (x[i] == '0' && y[i] == '1') ++minus;
        }
        cout << max(plus, minus) << '\n';
    }
    return 0;
}
