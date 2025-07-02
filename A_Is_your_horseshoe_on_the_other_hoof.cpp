#include <iostream>
#include <set>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> colors;
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);

    int unique_colors = colors.size();
    int to_buy = 4 - unique_colors;

    cout << to_buy << "\n";

    return 0;
}
