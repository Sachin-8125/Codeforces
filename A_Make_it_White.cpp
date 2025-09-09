#include <iostream>
using namespace std;
int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        string s;
        cin >> s;
        int first = s.find('B'), last = s.rfind('B');
        cout << last - first + 1 << '\n';
    }
}