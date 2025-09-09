#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int v[3];
        for (int &x : v) cin >> x;
        sort(v, v+3);
        cout << v[2] - v[0] << '\n';
    }
}