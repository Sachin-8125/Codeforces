#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b; cin >> a >> b;
        if (a == b) cout << "0\n";
        else if (a > b) cout << ( (a-b)%2 ? 2 : 1 ) << '\n';
        else cout << ( (b-a)%2 ? 1 : 2 ) << '\n';
    }
}