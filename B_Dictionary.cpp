#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int first = s[0] - 'a';
        int second = s[1] - 'a';

        int result = first * 25;
        result += (second + 1);
        
        if (second > first) result--;

        cout << result << "\n";
    }

    return 0;
}
