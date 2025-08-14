#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        set<int> has;
        for (int i = 1; i * i <= n; ++i)
            has.insert(i * i);
        for (int i = 1; i * i * i <= n; ++i)
            has.insert(i * i * i);
        cout << has.size() << endl;
    }
    return 0;
}