#include <iostream>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "=\n";
        return;
    }
    char ca = a.back(), cb = b.back();
    int na = a.size(), nb = b.size();
    if (ca != cb) {
        if (ca == 'L') cout << ">\n";
        else if (cb == 'L') cout << "<\n";
        else if (ca == 'S') cout << "<\n";
        else cout << ">\n";
    } else {
        if (ca == 'S') {
            if (na < nb) cout << ">\n";
            else cout << "<\n";
        } else {
            if (na < nb) cout << "<\n";
            else cout << ">\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}