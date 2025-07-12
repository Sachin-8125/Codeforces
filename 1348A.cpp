#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int sum1 = (1 << n); // biggest coin
        for (int i = 1; i < n / 2; i++) sum1 += (1 << i);
        int sum2 = 0;
        for (int i = n / 2; i < n; i++) sum2 += (1 << i);
        cout << abs(sum1 - sum2) << endl;
    }
    return 0;
}