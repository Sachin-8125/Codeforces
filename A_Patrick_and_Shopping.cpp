#include <iostream>
using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    // Three possible routes
    int route1 = d1 + d2 + d3;
    int route2 = 2 * (d1 + d2);
    int route3 = 2 * (d1 + d3);
    int route4 = 2 * (d2 + d3);
    // Output the minimal route
    cout << min(min(route1, route2), min(route3, route4)) << endl;
    return 0;
}
