#include <bits/stdc++.h>
using namespace std;

struct Circle {
    double x, y, r;
};

double angle(double px, double py, const Circle& c) {
    double d = hypot(px - c.x, py - c.y);
    return 2.0 * atan2(c.r, d);
}

double common_angle(double px, double py, const vector<Circle>& circles) {
    double a1 = angle(px, py, circles[0]);
    double a2 = angle(px, py, circles[1]);
    double a3 = angle(px, py, circles[2]);
    if (abs(a1 - a2) < 1e-7 && abs(a2 - a3) < 1e-7)
        return a1;
    return -1.0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<Circle> c(3);
    for (int i = 0; i < 3; ++i) {
        int x, y, r;
        cin >> x >> y >> r;
        c[i] = {double(x), double(y), double(r)};
    }

    // Use grid search + local optimization
    double best_x = 0, best_y = 0, max_angle = 0;

    for (double x = -1000; x <= 1000; x += 5) {
        for (double y = -1000; y <= 1000; y += 5) {
            double a1 = angle(x, y, c[0]);
            double a2 = angle(x, y, c[1]);
            double a3 = angle(x, y, c[2]);
            if (abs(a1 - a2) < 1e-5 && abs(a2 - a3) < 1e-5) {
                if (a1 > max_angle) {
                    max_angle = a1;
                    best_x = x;
                    best_y = y;
                }
            }
        }
    }

    if (max_angle > 0) {
        cout << fixed << setprecision(5) << best_x << " " << best_y << endl;
    }

    return 0;
}
