#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int mxa = 0, mxb = 0;
        for (auto &x : v) {
            cin >> x;
            if (x >= mxa) mxb = mxa, mxa = x;
            else if (x > mxb) mxb = x;
        }
        for (auto x : v)
            cout << x - (x == mxa ? mxb : mxa) << ' ';
        cout << '\n';
    }
}
