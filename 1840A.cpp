#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, ans;
        cin >> n >> s;

        for (int i = 0; i < n; ) {
            ans += s[i];
            int j = i + 1;
            while (j < n && s[j] != s[i]) ++j;
            i = j + 1;
        }

        cout << ans << '\n';
    }
    return 0;
}

