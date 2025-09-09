#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 998244353;

struct AttendeeRange {
    int l, r;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        int n;
        cin >> s >> n;
        int m = s.size();

        vector<AttendeeRange> attendees(n);
        map<int, int> delta; // for difference array optimization of range coverage

        for (int i = 0; i < n; ++i) {
            cin >> attendees[i].l >> attendees[i].r;
            delta[attendees[i].l]++;
            delta[attendees[i].r + 1]--;
        }

        vector<pair<int, int>> candidates; // (cost, start_pos of docker)

        for (int i = 0; i + 5 < m; ++i) {
            string target = "docker";
            int cost = 0;
            for (int j = 0; j < 6; ++j) {
                if (s[i + j] != target[j]) cost++;
            }
            candidates.emplace_back(cost, i);
        }

        sort(candidates.begin(), candidates.end());

        // Try placing non-overlapping dockers from sorted candidates
        vector<int> min_costs = {0};  // min_costs[k] = min total cost to place k docker substrings
        vector<bool> used(m, false);

        int last_end = -1;
        int cost_sum = 0;
        for (auto &p : candidates) {
            int cost = p.first, pos = p.second;
            if (pos > last_end) {
                cost_sum += cost;
                last_end = pos + 5;
                min_costs.push_back(cost_sum);
            }
        }

        int max_k = min_costs.size() - 1;
        vector<int> people_with_k(max_k + 2, 0); // people_with_k[k] = number of attendees satisfied by k

        // Prefix sum the attendance ranges
        int curr = 0, max_people = 0;
        for (int k = 0; k <= max_k + 1; ++k) {
            if (delta.count(k)) curr += delta[k];
            if (k <= max_k) {
                people_with_k[k] = curr;
                max_people = max(max_people, curr);
            }
        }

        // Find minimal cost to satisfy max_people
        int answer = INF;
        for (int k = 0; k <= max_k; ++k) {
            if (people_with_k[k] == max_people) {
                answer = min(answer, min_costs[k]);
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
