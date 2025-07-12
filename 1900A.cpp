#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, ans = 0; string str;
        cin >> n >> str;
        for (int i = 0; i < n; i++) {
            if (str[i] == '.') {
                int cnt = 0;
                while (i < n && str[i] == '.') cnt++, i++;
                if (cnt > 2) { ans = 2; break; }
                ans += cnt;
                i--;
            }
        }
        cout << ans << '\n';
    }
}