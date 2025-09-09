#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = LLONG_MIN;
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] * a[i - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}