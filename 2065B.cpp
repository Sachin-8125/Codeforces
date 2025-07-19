#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool hasEqualAdjacent = false;
        for (size_t i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) {
                hasEqualAdjacent = true;
                break;
            }
        }

        cout << (hasEqualAdjacent ? 1 : s.size()) << '\n';
    }
    return 0;
}