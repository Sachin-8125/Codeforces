#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long t; 
    cin >> t;
    while (t--) {
        long n; 
        string b; 
        cin >> n >> b;
        set<char> st(b.begin(), b.end());
        string a(st.begin(), st.end());
        unordered_map<char, char> m;
        for (size_t i = 0; i < a.size(); i++)
            m[a[i]] = a[a.size() - 1 - i];
        for (auto &ch : b) ch = m[ch];
        cout << b << '\n';
    }
}

