#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        string s;
        cin >> n >> s;
        if ((s.substr(0,4) == "2020") || (s.substr(n-4,4) == "2020"))
            cout << "YES" << endl;
        else if ((s.substr(0,2) == "20") && (s.substr(n-2,2) == "20"))
            cout << "YES" << endl;
        else if ((s.substr(0,3) == "202") && (s.substr(n-1,1) == "0"))
            cout << "YES" << endl;
        else if ((s[0] == '2') && (s.substr(n-3,3) == "020"))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}