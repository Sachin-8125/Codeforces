#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, v; 
    cin >> n >> v;

    vector<pair<int, int>> kayak, catamaran;

    for (int i = 0; i < n; ++i) {
        int t, p;
        cin >> t >> p;
        if (t == 1)
            kayak.emplace_back(p, i + 1);
        else if (t == 2)
            catamaran.emplace_back(p, i + 1);
    }

    sort(kayak.rbegin(), kayak.rend());
    sort(catamaran.rbegin(), catamaran.rend());

    int maxi = 0, bk = 0, bc = 0;

    int k = min((int)kayak.size(), v);
    int sum = 0;
    for (int i = 0; i < k; ++i)
        sum += kayak[i].first;

    int c = min((int)catamaran.size(), (v - k) / 2);
    for (int i = 0; i < c; ++i)
        sum += catamaran[i].first;

    if (sum > maxi) {
        maxi = sum;
        bk = k;
        bc = c;
    }

    while (k > 0 && c < (int)catamaran.size()) {
        sum -= kayak[--k].first;
        if (k + (c + 1) * 2 <= v) {
            sum += catamaran[c++].first;
        }
        if (sum > maxi) {
            maxi = sum;
            bk = k;
            bc = c;
        }
    }

    cout << maxi << '\n';
    for (int i = 0; i < bk; ++i)
        cout << kayak[i].second << '\n';
    for (int i = 0; i < bc; ++i)
        cout << catamaran[i].second << '\n';

    return 0;
}