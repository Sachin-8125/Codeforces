#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int ans = 0;
    int coins[6] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++){
        ans += x / coins[i];
        x %= coins[i];
    }
    cout << ans << endl;
    return 0;
}