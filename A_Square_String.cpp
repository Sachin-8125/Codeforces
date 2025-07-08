#include <iostream>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        int n = s.size();
        cout << ((n % 2 == 0 && s.substr(0, n/2) == s.substr(n/2)) ? "YES\n" : "NO\n");
    }
}