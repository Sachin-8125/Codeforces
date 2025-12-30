#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int countReach = 0;

        // We'll mark used enemy pawns by setting them to '0' when captured
        for (int i = 0; i < n; i++) {
            if (t[i] == '1') {
                // If enemy cell above is empty
                if (s[i] == '0') {
                    countReach++;
                } 
                // Try capture from left
                else if (i > 0 && s[i - 1] == '1') {
                    s[i - 1] = '0';  // capture
                    countReach++;
                } 
                // Try capture from right
                else if (i + 1 < n && s[i + 1] == '1') {
                    s[i + 1] = '0';  // capture
                    countReach++;
                }
            }
        }

        cout << countReach << "\n";
    }

    return 0;
}
