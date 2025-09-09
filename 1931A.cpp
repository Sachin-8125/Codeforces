#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        string res = "aaa";
        for(int i=2; i>=0; --i) {
            int add = max(1, n-26*i);
            res[2-i] = 'a' + add - 1;
            n -= add;
        }
        cout << res << '\n';
    }
}