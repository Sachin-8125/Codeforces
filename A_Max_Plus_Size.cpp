#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int bestScore = 0;

        // Try each position as the "maximum red element"
        for(int mxIndex = 0; mxIndex < n; mxIndex++){
            int mxVal = a[mxIndex];

            // Mark neighbors of mxIndex as blocked
            vector<bool> blocked(n, false);
            blocked[mxIndex] = true;
            if(mxIndex - 1 >= 0) blocked[mxIndex - 1] = true;
            if(mxIndex + 1 < n) blocked[mxIndex + 1] = true;

            // We will count an independent set of remaining positions
            vector<int> picks;
            for(int i = 0; i < n; i++){
                if(!blocked[i] && a[i] <= mxVal){
                    picks.push_back(i);
                }
            }

            // Classic maximum independent set count on a path of these remaining indices
            int count = 1;  // count includes the mxIndex itself
            int last = -2;  // used to track the last chosen position
            for(int idx : picks){
                // If not adjacent to last, take it
                if(idx > last + 1){
                    count++;
                    last = idx;
                }
            }

            // Score = count of red + mxVal
            bestScore = max(bestScore, count + mxVal);
        }

        cout << bestScore << "\n";
    }
    return 0;
}
