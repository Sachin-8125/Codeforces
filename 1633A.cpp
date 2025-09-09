#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if (n % 7 == 0)
        return n;
    for (int i = 0; i < 10; i++) {
        int x = (n / 10) * 10 + i;
        if (x % 7 == 0)
            return x;
    }
    return n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
