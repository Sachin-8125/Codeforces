#include <iostream>
using namespace std;

void solve() {
    long long N, K; cin >> N >> K;
    if (N % K)
        cout << "1\n" << N << '\n';
    else
        cout << "2\n" << N-1 << " 1\n";
}

int main() {
    int T; cin >> T;
    while (T--) solve();
}
