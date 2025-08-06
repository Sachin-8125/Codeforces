#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin >> n; // number of friends
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0) {
            cout << -1 << endl; // impossible to distribute equally
            continue;
        }
        int avg = sum / n;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > avg) cnt++; // count friends above average
        }
        cout << cnt << endl;
    }
    return 0;
}
