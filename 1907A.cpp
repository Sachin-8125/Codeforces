#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        for (char i = '1'; i <= '8'; ++i)
            if (s[1] != i) cout << s[0] << i << '\n';
        for (char i = 'a'; i <= 'h'; ++i)
            if (s[0] != i) cout << i << s[1] << '\n';
    }
}
