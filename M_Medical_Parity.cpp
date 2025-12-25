#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        int n = x.size();
        vector<vector<int>> dp(n+1, vector<int>(2, 1e9));
        dp[0][0] = 0; 
        
        for(int i = 0; i < n; i++){
            for(int parity = 0; parity < 2; parity++){
                if(dp[i][parity] == 1e9) continue;
                {
                    int new_parity = parity; 
                    int cost = (x[i] != '0' ? 1 : 0) + 
                               (y[i] - '0' != new_parity ? 1 : 0); 
                    dp[i+1][new_parity] = min(dp[i+1][new_parity], dp[i][parity] + cost);
                }
                {
                    int new_parity = 1 - parity; 
                    int cost = (x[i] != '1' ? 1 : 0) + 
                               (y[i] - '0' != new_parity ? 1 : 0); 
                    dp[i+1][new_parity] = min(dp[i+1][new_parity], dp[i][parity] + cost);
                }
            }
        }
        
        cout << min(dp[n][0], dp[n][1]) << endl;
    }
    return 0;
}
