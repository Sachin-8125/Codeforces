#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cut = 0;
        for (int p = 1; !cut && p < s.size(); p++) {
            if (s[p - 1] == s[p]) {
                cut = p;
                break;
            }
        }
        if (!cut) {
            cout << (s[0] == 'a' ? 'b' : 'a') << s << endl;
        } else {
            cout << s.substr(0, cut) << (s[cut - 1] == 'a' ? 'b' : 'a') << s.substr(cut) << endl;
        }
    }
}
