#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while(t--) {
        long n, x;
        cin >> n >> x;
        long idx = -1;
        bool possible = true;
        for(long p = 0; p < n; ++p) {
            int s;
            cin >> s;
            if(idx < 0 && s) {
                idx = p;
            }
            if(s && idx + x <= p) {
                possible = false;
            }
        }
        cout << (possible ? "YES" : "NO") << '\n';
    }
}