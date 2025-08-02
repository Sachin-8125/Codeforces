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
        string log;
        cin >> log;
        vector<int> cnt(26, 0); 
        for (char c : log) {
            cnt[c - 'A']++;
        }
        int solved = 0;
        for (int i = 0; i < 26; ++i) {
            if (cnt[i] >= i + 1) solved++;
        }
        cout << solved << endl;
    }
    return 0;
}
