#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int limit = n;
        // find place where '**' occurs
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '*' && s[i + 1] == '*') {
                limit = i;
                break;
            }
        }
        // count coins
        int ans = 0;
        for (int i = 0; i < limit; ++i) {
            if (s[i] == '@') ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
