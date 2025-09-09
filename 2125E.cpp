#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_valid_set(const vector<int>& Q) {
    int n = Q.size();
    int maxi = *max_element(Q.begin(), Q.end());
    
    // We try different combinations of multiplicities
    // Limit the search space for efficiency
    int limit = min(8, 20/n + 2);
    
    function<bool(int, vector<int>&)> backtrack = 
        [&](int pos, vector<int>& counts) -> bool {
        if (pos == n) {
            int total_elements = 0;
            for (int c : counts) total_elements += c;
            if (total_elements <= 1) return false;
            
            ll numerator = 0;
            for (int i = 0; i < n; i++) {
                numerator += (ll)counts[i] * Q[i];
            }
            int denominator = total_elements - 1;
            
            if (numerator % denominator == 0) {
                int s = numerator / denominator;
                if (s > maxi) return true;
            }
            return false;
        }
        
        for (int c = 1; c < limit; c++) {
            counts[pos] = c;
            if (backtrack(pos + 1, counts)) return true;
        }
        return false;
    };
    
    vector<int> counts(n);
    return backtrack(0, counts);
}

ll solve(int n, int x) {
    if (n > x) return 0;  // Cannot form n distinct elements from [1..x]
    if (n == 1) return x; // All single-element sets are valid
    
    ll result = 0;
    
    // Generate all n-element subsets of [1..x]
    function<void(int, vector<int>&)> generate_combinations = 
        [&](int start, vector<int>& current) {
        if (current.size() == n) {
            if (is_valid_set(current)) {
                result++;
            }
            return;
        }
        
        int remaining = n - current.size();
        for (int i = start; i <= x - remaining + 1; i++) {
            current.push_back(i);
            generate_combinations(i + 1, current);
            current.pop_back();
        }
    };
    
    vector<int> current;
    generate_combinations(1, current);
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << solve(n, x) << "\n";
    }
    
    return 0;
}
