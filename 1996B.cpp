#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> grid(n);
        for (auto &row : grid) cin >> row;

        int reducedSize = n / k;
        vector<string> result(reducedSize, string(reducedSize, '0'));

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                result[i / k][j / k] = grid[i][j];  // top-left of k×k block
            }
        }

        for (const auto &row : result)
            cout << row << '\n';
    }

    return 0;
}
