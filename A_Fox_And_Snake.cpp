#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Flag to determine where the single '#' goes on even rows
    // true means '#' on right, false means '#' on left
    bool right_side = true;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // Odd row: full of '#'
            for (int j = 0; j < m; j++) {
                cout << '#';
            }
        } else {
            // Even row: single '#' either on left or right
            if (right_side) {
                // '#' on right
                for (int j = 1; j < m; j++) cout << '.';
                cout << '#';
            } else {
                // '#' on left
                cout << '#';
                for (int j = 1; j < m; j++) cout << '.';
            }
            // Flip the side for next even row
            right_side = !right_side;
        }
        cout << "\n";
    }

    return 0;
}
