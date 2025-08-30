#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while(t--) {
        long n;
        cin >> n;
        bool pos = true;
        long cnt = 0;
        long long total = 0;
        for(long p = 0; p < n; p++) {
            long x;
            cin >> x;
            if(x > 0) {
                pos = true;
                total += x;
            }
            else if(x < 0) {
                if(pos) {
                    ++cnt;
                    pos = false;
                }
                total -= x;
            }
        }
        cout << total << " " << cnt << endl;
    }
    return 0;
}