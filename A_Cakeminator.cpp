#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> cake(r);
    for (int i = 0; i < r; ++i) {
        cin >> cake[i];
    }

    vector<bool> row(r, true), col(c, true);

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            if (cake[i][j] == 'S') {
                row[i] = false;
                col[j] = false;
            }

    int count = 0;
    for (int i = 0; i < r; ++i) {
        if (row[i]) {
            count += c;
        } else {
            for (int j = 0; j < c; ++j)
                if (col[j] && cake[i][j] != 'S')
                    ++count;
        }
    }

    cout << count << endl;
    return 0;
}
