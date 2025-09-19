#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> brand_total_cost(k + 1, 0);
    vector <long long> profitable_brands;
    for (int i = 0; i < k; ++i) {
        int brand_id;
        long long cost;
        cin >> brand_id >> cost;
        brand_total_cost[brand_id] += cost;
    }
    for (long long total_cost : brand_total_cost) {
        if (total_cost > 0) {
            profitable_brands.push_back(total_cost);
        }
    }
    sort(profitable_brands.rbegin(), profitable_brands.rend());
    long long max_earnings = 0;
    int shelves_to_use = min((int)profitable_brands.size(), n);
    for (int i = 0; i < shelves_to_use; ++i) {
        max_earnings += profitable_brands[i];
    }
    cout << max_earnings << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

