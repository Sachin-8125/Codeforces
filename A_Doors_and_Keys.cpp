#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    string s;
    cin >> s;
    size_t r_pos = s.find('r');
    size_t R_pos = s.find('R');
    size_t g_pos = s.find('g');
    size_t G_pos = s.find('G');
    size_t b_pos = s.find('b');
    size_t B_pos = s.find('B');
    if (r_pos < R_pos && g_pos < G_pos && b_pos < B_pos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
