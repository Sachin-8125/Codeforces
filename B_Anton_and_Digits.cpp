#include <iostream>
using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int num256 = min(k2, min(k5, k6));  
    k2 -= num256; 

    int num32 = min(k2, k3); 

    long long answer = 256 * num256 + 32 * num32;
    cout << answer << endl;
    return 0;
}
