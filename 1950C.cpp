#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int t, a, b; cin >> t;
  while (t--) {
    char c; cin >> a >> c >> b;
    cout << setfill('0') << setw(2) << (a+11)%12+1 << ":" << setw(2) << b << (a<12?" AM\n":" PM\n");
  }
}