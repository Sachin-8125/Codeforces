#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    int min_diff = abs(a[0] - a[n-1]);
    int idx1 = 1, idx2 = n;
    for(int i=1; i<n; ++i) {
        int diff = abs(a[i] - a[i-1]);
        if(diff < min_diff) {
            min_diff = diff;
            idx1 = i;
            idx2 = i+1;
        }
    }
    cout << idx1 << " " << idx2 << endl;
    return 0;
}