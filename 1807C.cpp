#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> index_parity;
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            char ch = s[i];
            int parity = i % 2;
            if (index_parity.count(ch)) {
                if (index_parity[ch] != parity) {
                    possible = false;
                    break;
                }
            } else {
                index_parity[ch] = parity;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
