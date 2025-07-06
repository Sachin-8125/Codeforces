#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    string output = "";
    for (size_t i = 0; i < input.length(); ++i) {
        if (input[i] == '.') {
            output += '0';
        }   
        else if (input[i] == '-' && i + 1 < input.length() && input[i + 1] == '.') {
            output += '1';
            ++i;
        }
        else {
            output += '2';
            ++i;
        }
    }
    cout << output << endl;
    return 0;
}
