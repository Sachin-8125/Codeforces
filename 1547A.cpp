#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int ax, ay, bx, by, fx, fy;
        cin >> ax >> ay >> bx >> by >> fx >> fy; 
        int dist = abs(ax - bx) + abs(ay - by);
        bool onPath = false;
        if(ax == bx && ax == fx){
            if((fy > min(ay, by)) && (fy < max(ay, by)))
                onPath = true;
        }
        if(ay == by && ay == fy){
            if((fx > min(ax, bx)) && (fx < max(ax, bx)))
                onPath = true;
        }
        if(onPath) dist += 2;
        cout << dist << "\n";
    }
    return 0;
}
