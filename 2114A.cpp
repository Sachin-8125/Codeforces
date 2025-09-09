#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Convert 4-digit string to integer
        int y = stoi(s);
        int ans = -1;

        for (int i = 0; i * i <= y; ++i) {
            if (i * i == y) {
                ans = i;
                break;
            }
        }

        if (ans >= 0)
            cout << ans << " 0\n";
        else
            cout << "-1\n";
    }

    return 0;
}
