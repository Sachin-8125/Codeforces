#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iomanip>
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long total_sum = 0;
    long long max_val = -2e9; 
    for (int i = 0; i < n; ++i) {
        long long current_val;
        cin >> current_val;
        total_sum += current_val;
        if (current_val > max_val) {
            max_val = current_val;
        }
    }
    long long sum_of_other_elements = total_sum - max_val;
    double avg_of_other_elements = static_cast<double>(sum_of_other_elements) / (n - 1);
    double result = static_cast<double>(max_val) + avg_of_other_elements;
    cout << fixed << setprecision(9) << result << endl;
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