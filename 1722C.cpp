#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<string>> words(3, vector<string>(n));
        map<string, int> freq;

        // Input and frequency counting
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> words[i][j];
                freq[words[i][j]]++;
            }
        }

        // Score calculation
        for (int i = 0; i < 3; ++i) {
            int score = 0;
            for (int j = 0; j < n; ++j) {
                if (freq[words[i][j]] == 1) score += 3;
                else if (freq[words[i][j]] == 2) score += 1;
            }
            cout << score << " ";
        }
        cout << endl;
    }
    return 0;
}
