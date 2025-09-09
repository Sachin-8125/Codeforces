#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> freq;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int min_unique = INT_MAX, pos = -1;
        for(int i = 0; i < n; ++i) {
            if(freq[arr[i]] == 1 && arr[i] < min_unique) {
                min_unique = arr[i];
                pos = i + 1; // Convert to 1-based indexing
            }
        }
        cout << pos << endl;
    }
    return 0;
}