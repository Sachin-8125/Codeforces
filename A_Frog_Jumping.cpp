#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long right = (k + 1) / 2;
        long long left = k / 2;
        cout << (right * a - left * b) << endl;
    }
    return 0;
}