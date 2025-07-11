#include <iostream>
using namespace std;
int main() {
  int t; 
  cin >> t;
  while (t--) {
    int n, m; 
    cin >> n >> m;
    int cnt[7]={0,0,0,0,0,0,0};
    for (int i=0; i<n; ++i) {
      char c; cin >> c;
      ++cnt[c-'A'];
    }
    int ans=0;
    for (int i=0; i<7; ++i)
      ans += max(m-cnt[i], 0);
    cout << ans << '\n';
  }
}