#include <iostream>
using namespace std;

int main() {
    long t; 
    cin >> t;
    while (t--) {
        long n; 
        cin >> n;
        bool one = false; 
        int s = 0;
        for (long p = 0; p < n; p++) {
            int x; 
            cin >> x;
            if (x % 3 == 1) one = true;
            s += x; 
            s %= 3;
        }
        cout << (!one && s % 3 == 1 ? "2" : (s % 3 ? "1" : "0")) << endl;
    }
    return 0;
}
