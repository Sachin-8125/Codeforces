#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int s; cin >> s;
        vector<int> digits;
        for (int d = 9; d >= 1; --d) {
            if (s >= d) {
                digits.push_back(d);
                s -= d;
            }
        }
        if (s > 0) digits.push_back(s);
        for (int i = digits.size() - 1; i >= 0; --i) {
            cout << digits[i];
        }
        cout << "\n";
    }
    return 0;
}