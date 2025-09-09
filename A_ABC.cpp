#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin >> s;
        if (s.length() >= 3 || s == "00" || s == "11") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
