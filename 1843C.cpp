#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans = 0;
        cin>>n;
        while (n > 1) {
            ans += n;
            n /= 2;
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}
