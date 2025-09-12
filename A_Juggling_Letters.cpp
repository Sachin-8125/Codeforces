#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        vector<int> freq(26, 0);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            for (char c : arr[i]) {
                freq[c - 'a']++;
            }
        }
        bool possible = true;
        for (int count : freq) {
            if (count % n != 0) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
