#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string m[10];
        for (int i = 0; i < 10; i++) cin >> m[i];
        int sum = 0;
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                if (m[i][j] == 'X')
                    sum += 1 + min({i, j, 9 - i, 9 - j});
        cout << sum << '\n';
    }
}