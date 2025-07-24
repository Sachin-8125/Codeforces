#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int first = s.find('1'), last = s.rfind('1'), count = 0;
        for (int i = first; i < last; ++i)
            if (s[i] == '0') count++;
        cout << count << '\n';
    }
}
