#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long t; cin >> t;
    while(t--){
        long n; cin >> n;
        string s, t;
        for(int p = 0; p < n; p++){
            s += (p % 2 ? ".." : "##");
            t += (p % 2 ? "##" : "..");
        }
        for(int row = 0; row < 2 * n; row++){cout << (row % 4 < 2 ? s : t) << endl;}
    }

}