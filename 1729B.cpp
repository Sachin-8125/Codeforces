#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string ans = "";
        for (int i = n-1; i >= 0; ) {
            if (i >= 2 && s[i] == '0') {
                int num = (s[i-2]-'0')*10 + (s[i-1]-'0');
                ans += (char)('a' + num - 1);
                i -= 3;
            } else {
                ans += (char)('a' + (s[i]-'0') - 1);
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}
