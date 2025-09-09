#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    while (T--) {
        int n, d;
        string str;
        cin >> n >> d >> str;
        int pos = -1;
        for (int i = 0; i < n; i++) {
            if (str[i] < d + '0') {
                pos = i;
                break;
            }
        }
        if (pos == -1) {
            cout << str << d << endl;
        } else {
            str.insert(pos, to_string(d));
            cout << str << endl;
        }
    }
    return 0;
}