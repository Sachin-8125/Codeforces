#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int least_dist = 0;
		int greatest_dist = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 1) {
				least_dist = i + 1;
			} else if (a[i] == n) {
				greatest_dist = i + 1;
			}
		}
		int minL = min(least_dist, (n + 1) - least_dist);
		int minG = min(greatest_dist, (n + 1) - greatest_dist);
		int dist = abs(least_dist - greatest_dist);
		cout << min({dist + minL, dist + minG, minL + minG}) << '\n';
	}
	return 0;
}