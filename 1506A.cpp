#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;
        long long pos = x - 1;
        long long col = pos / n;
        long long row = pos % n;
        long long result = row * m + col + 1;
        cout << result << "\n";
    }
    return 0;
}
