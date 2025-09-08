#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        string s;
        cin >> a >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        string option1 = s + rev;
        string option2 = rev + s;
        string smallest = min({s, option1, option2});
        cout << smallest << endl;
    }
    return 0;
}