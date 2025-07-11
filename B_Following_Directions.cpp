#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x = 0, y = 0; string s;
        cin >> n >> s;
        bool found = false;
        for (char c : s) {
            if (c == 'U') y++;
            else if (c == 'D') y--;
            else if (c == 'L') x--;
            else x++;
            if (x == 1 && y == 1) { found = true; break; }
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
}