#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, element;
    cin >> t;
    while (t--) {
        cin >> n;
        set<long long> values;
        for (int i = 0; i < n; ++i) {
            cin >> element;
            values.insert(element);
        }
        cout << values.size() << '\n';
    }

    return 0;
}
