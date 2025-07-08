#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; (i * i) <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    int nextPrime = -1;
    for(int i = n + 1; i <= m; i++) {
        if(isPrime(i)) {
            nextPrime = i;
            break;
        }
    }
    
    cout << (nextPrime == m ? "YES" : "NO");
    return 0;
}