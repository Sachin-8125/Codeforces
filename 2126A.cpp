#include <iostream>
#include <set>
using namespace std;

// Function to extract digits of a number and put them in a set
set<int> getDigits(int num) {
    set<int> digits;
    if (num == 0) {
        digits.insert(0);
        return digits;
    }
    while (num > 0) {
        digits.insert(num % 10);
        num /= 10;
    }
    return digits;
}

// Function to check if number y shares common digit with digitsX
bool sharesCommonDigit(int y, const set<int> &digitsX) {
    if (y == 0) {
        return digitsX.count(0) > 0;
    }
    while (y > 0) {
        int d = y % 10;
        if (digitsX.count(d) > 0) {
            return true;
        }
        y /= 10;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        // Get all digits of x
        set<int> digitsX = getDigits(x);
        
        int y = 0;
        // Iterate to find the smallest y that shares a common digit
        while (true) {
            if (sharesCommonDigit(y, digitsX)) {
                cout << y << "\n";
                break;
            }
            ++y;
        }
    }

    return 0;
}
