#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int INF = 1e9;

pair<int, int> factor_count(int num) {
    int count_2 = 0, count_5 = 0;
    if (num == 0) return {INF, INF};
    while (num % 2 == 0) num /= 2, count_2++;
    while (num % 5 == 0) num /= 5, count_5++;
    return {count_2, count_5};
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    vector<vector<pair<int, int>>> fact(n, vector<pair<int, int>>(n));

    int zero_i = -1, zero_j = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
            if (mat[i][j] == 0) {
                zero_i = i;
                zero_j = j;
            }
            fact[i][j] = factor_count(mat[i][j]);
        }
    }

    vector<vector<int>> dp2(n, vector<int>(n, INF));
    vector<vector<int>> dp5(n, vector<int>(n, INF));
    vector<vector<char>> dir2(n, vector<char>(n));
    vector<vector<char>> dir5(n, vector<char>(n));

    dp2[0][0] = fact[0][0].first;
    dp5[0][0] = fact[0][0].second;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                if (dp2[i][j] > dp2[i - 1][j] + fact[i][j].first) {
                    dp2[i][j] = dp2[i - 1][j] + fact[i][j].first;
                    dir2[i][j] = 'D';
                }
                if (dp5[i][j] > dp5[i - 1][j] + fact[i][j].second) {
                    dp5[i][j] = dp5[i - 1][j] + fact[i][j].second;
                    dir5[i][j] = 'D';
                }
            }
            if (j > 0) {
                if (dp2[i][j] > dp2[i][j - 1] + fact[i][j].first) {
                    dp2[i][j] = dp2[i][j - 1] + fact[i][j].first;
                    dir2[i][j] = 'R';
                }
                if (dp5[i][j] > dp5[i][j - 1] + fact[i][j].second) {
                    dp5[i][j] = dp5[i][j - 1] + fact[i][j].second;
                    dir5[i][j] = 'R';
                }
            }
        }
    }

    int min_trailing = min(dp2[n - 1][n - 1], dp5[n - 1][n - 1]);
    string path;

    if (zero_i != -1 && min_trailing > 1) {
        cout << "1\n";
        for (int i = 0; i < zero_i; ++i) path += 'D';
        for (int j = 0; j < zero_j; ++j) path += 'R';
        for (int i = zero_i; i < n - 1; ++i) path += 'D';
        for (int j = zero_j; j < n - 1; ++j) path += 'R';
        cout << path << "\n";
    } else {
        cout << min_trailing << "\n";
        int i = n - 1, j = n - 1;
        bool use2 = dp2[n - 1][n - 1] < dp5[n - 1][n - 1];
        while (i > 0 || j > 0) {
            char move = use2 ? dir2[i][j] : dir5[i][j];
            path += move;
            if (move == 'D') i--;
            else j--;
        }
        reverse(path.begin(), path.end());
        cout << path << "\n";
    }

    return 0;
}
