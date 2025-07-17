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
        int r = n % 8;
        if (r == 0 || r == 4)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}

