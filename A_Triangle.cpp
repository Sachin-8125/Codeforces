#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 4; ++i)
        cin >> a[i];

    sort(a, a + 4);

    // Try all combinations of 3 sticks out of 4
    bool triangle = false, segment = false;
    for (int i = 0; i < 2; ++i) {
        int x = a[i], y = a[i+1], z = a[i+2];
        if (x + y > z) triangle = true;
        else if (x + y == z) segment = true;
    }
    if (triangle)
        cout << "TRIANGLE" << endl;
    else if (segment)
        cout << "SEGMENT" << endl;
    else
        cout << "IMPOSSIBLE" << endl;
    return 0;
}
