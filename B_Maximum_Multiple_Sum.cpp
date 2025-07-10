#include <iostream>

using namespace std;

// Return sum of multiples of x that are <= n
int sum_multiples_of(int x, int n) {
    int sum_multiples = 0;
    int i = 1;
    while (x * i <= n) {
        sum_multiples += x * i;
        i += 1;
    }
    return sum_multiples;
}

// Main function
int main() {
    int t;
    cin >> t;

    for (int i=0; i < t; i++) {
        int n;
        cin >> n;
        int x = 2;
        int optimal = x;
        int optimal_sum = 0;
        while (x <= n) {
            int sum_multiples = sum_multiples_of(x, n);
            if (sum_multiples > optimal_sum) {
                optimal = x;
                optimal_sum = sum_multiples;
            }
            x ++;
        }
        cout << optimal << endl;
    }
}