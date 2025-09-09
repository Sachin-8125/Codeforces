#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, cost, min_both = INT_MAX, min_first = INT_MAX, min_second = INT_MAX;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            string skills;
            cin >> cost >> skills;
            if (skills == "11") min_both = min(min_both, cost);
            else if (skills == "10") min_first = min(min_first, cost);
            else if (skills == "01") min_second = min(min_second, cost);
        }
        int result = min(min_both, (min_first == INT_MAX || min_second == INT_MAX) ? INT_MAX : min_first + min_second);
        cout << (result == INT_MAX ? -1 : result) << endl;
    }
    return 0;
}