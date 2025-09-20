#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> banned;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x; banned.insert(x);
        }
        vector<int> available;
        for (int d = 0; d <= 9; ++d) {
            if (!banned.count(d)) available.push_back(d);
        }
        int count = 0;
        int sz = available.size();
        for (int i = 0; i < sz; ++i) {
            for (int j = i + 1; j < sz; ++j) {
                count += 6;
            }
        }
        cout << count << endl;
    }
    return 0;
}