#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, one = 0, zero = 0;
    cin >> n;
    string str;
    cin >> str;
    for (char c : str) {
        if (c == 'z') zero++;   // 'z' is unique to "zero"
        else if (c == 'n') one++; // 'n' is unique to "one"
    }
    for (int i = 0; i < one; ++i) cout << "1 ";
    for (int i = 0; i < zero; ++i) cout << "0 ";
    return 0;
}
