#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-5;

struct Point {
    double x, y;
    double r;
};

Point p[3];

double dist(double x, double y, const Point& tp) {
    return sqrt((x - tp.x) * (x - tp.x) + (y - tp.y) * (y - tp.y));
}

double cost(double x, double y) {
    array<double, 3> ang;
    
    for(int i = 0; i < 3; ++i) {
        ang[i] = dist(x, y, p[i]) / p[i].r; // sin
    }
    
    array<double, 3> d;
    for(int i = 0; i < 3; ++i) {
        d[i] = ang[i] - ang[(i + 1) % 3]; // the difference between the angles of view
    }
    
    double ans = 0.0;
    for(int i = 0; i < 3; ++i) {
        ans += d[i] * d[i]; // similar variance
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i = 0; i < 3; i++) {
        cin >> p[i].x >> p[i].y >> p[i].r;
    }
    
    double x = 0.0, y = 0.0;
    for(int i = 0; i < 3; ++i) {
        x += p[i].x / 3;
        y += p[i].y / 3; // Search in the center of gravity attachment
    }
    
    double t = 1.0;
    while(t > eps) {
        bool improved = false;
        double current_cost = cost(x, y);
        
        if(cost(x + t, y) < current_cost) {
            x += t;
            improved = true;
        } else if(cost(x - t, y) < current_cost) {
            x -= t;
            improved = true;
        } else if(cost(x, y - t) < current_cost) {
            y -= t;
            improved = true;
        } else if(cost(x, y + t) < current_cost) {
            y += t;
            improved = true;
        }
        
        if(!improved) { // No better solutions around
            t /= 2;
        }
    }
    
    if(fabs(cost(x, y)) < eps) {
        cout << fixed << setprecision(6) << x << " " << y << "\n";
    }
    
    return 0;
}
