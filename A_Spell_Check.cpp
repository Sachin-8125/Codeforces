#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        cout << (n == 5 && s == "Timru" ? "YES" : "NO") << "\n";
    }
    return 0;
}