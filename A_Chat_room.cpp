#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string target = "hello";
    int j = 0; 

    for (int i = 0; i < (int)s.size() && j < (int)target.size(); i++) {
        if (s[i] == target[j]) j++; 
    }

    if (j == (int)target.size()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
