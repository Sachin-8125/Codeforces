#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int min_max = INT_MAX;
        for (int i = 0; i < n - 1; ++i) {
            min_max = min(min_max, max(a[i], a[i + 1]));
        }
        cout << min_max - 1 << endl;
    }
    return 0;
}
