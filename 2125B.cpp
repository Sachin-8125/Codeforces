#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

// Compute gcd using Euclidean algorithm
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, k;
        cin >> a >> b >> k;

        ll g = gcd(a, b);
        ll x = a / g;
        ll y = b / g;

        ll cx = k / x;
        ll cy = k / y;

        if (min(cx, cy) >= 1)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}