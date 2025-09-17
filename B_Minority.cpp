#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        string s; 
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') ++cnt0; 
            else ++cnt1;
        }
        int ans = min(cnt0, cnt1);
        if (cnt0 == cnt1) --ans;
        cout << ans << '\n';
    }
    return 0;
}