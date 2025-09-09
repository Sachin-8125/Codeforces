#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isDifficult(const string &s) {
    return s.find("FFT") != string::npos || s.find("NTT") != string::npos;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'A']++;
        }
        string res;
        for (int i = 0; i < 26; ++i) {
            if ('A' + i != 'F' && 'A' + i != 'T' && 'A' + i != 'N') {
                res.append(freq[i], 'A' + i);
                freq[i] = 0;
            }
        }
        res.append(freq['T' - 'A'], 'T');
        res.append(freq['F' - 'A'], 'F');
        res.append(freq['N' - 'A'], 'N');

        cout << res << "\n";
    }
    return 0;
}
