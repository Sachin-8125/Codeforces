#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end(), greater<int>());

    int totalSum = 0;
    for (int v : coins) totalSum += v;

    int takenSum = 0, count = 0;
    for (int v : coins) {
        takenSum += v;
        count++;
        if (takenSum > totalSum - takenSum) {
            cout << count << endl;
            break;
        }
    }
    return 0;
}
