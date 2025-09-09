#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> seats(n);
    for (int i = 0; i < n; ++i) {
        cin >> seats[i];
    }

    bool found = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (seats[i][j] == 'O' && seats[i][j+1] == 'O') {
                seats[i][j] = seats[i][j+1] = '+';
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i)
            cout << seats[i] << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
