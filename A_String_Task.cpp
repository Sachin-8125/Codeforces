#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aeiouyAEIOUY";
    
    for (char c : s) {
        // Skip vowels
        if (vowels.find(c) != string::npos) continue;
        
        // Convert to lowercase
        char lower = tolower(c);
        
        // Print with a dot in front
        cout << "." << lower;
    }

    return 0;
}
