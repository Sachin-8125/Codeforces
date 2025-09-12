#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, answer = 0;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        // Check the last column (should be 'D')
        for (int i = 0; i < n - 1; ++i)
            if (grid[i][m - 1] != 'D')
                answer++;

        // Check the last row (should be 'R')
        for (int j = 0; j < m - 1; ++j)
            if (grid[n - 1][j] != 'R')
                answer++;

        cout << answer << endl;
    }
    return 0;
}