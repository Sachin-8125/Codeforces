#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int students[n];
    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }
    int validStudents = 0;
    for (int i = 0; i < n; i++) {
        if (students[i] + k <= 5) {
            validStudents++;
        }
    }
    cout << validStudents / 3 << endl;
    return 0;
}