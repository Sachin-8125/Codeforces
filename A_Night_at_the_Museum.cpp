#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char prev = 'a';
    int sum = 0;
    for (char c : s)
        sum += min(abs(c - prev), 26 - abs(c - prev)), prev = c;
    cout << sum;
}