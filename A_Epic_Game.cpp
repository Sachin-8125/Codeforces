#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, a1, b, b1, n;
    cin >> a >> b >> n;
    while(n > 0) {
        a1 = gcd(a, n);
        n = n - a1;
        if(n <= 0) {
            cout << "0" << endl;
            return 0;
        }
        b1 = gcd(b, n);
        n = n - b1;
        if(n <= 0) {
            cout << "1" << endl;
            return 0;
        }
    }
    return 0;
}