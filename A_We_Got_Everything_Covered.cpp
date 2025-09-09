#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string alphabet;
        for (int i = 0; i < k; ++i) {
            alphabet += (char)('a' + i);
        }
        string result = "";
        for (int i = 0; i < n; ++i) {
            result += alphabet;
        }
        cout << result.substr(0, n * k) << endl;
    }
    return 0;
}
