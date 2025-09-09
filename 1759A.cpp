#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string sample = "";
        for (int i = 0; i < 20; ++i) sample += "Yes";
        if (sample.find(s) != string::npos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
