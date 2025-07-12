#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long t; cin >> t;
    while(t--){
        string x; cin >> x;
        bool res = (x.size() > 2) && (x[0] == '1') && (x[1] == '0') && (x[2] != '0') && (x != "101");
        cout << (res ? "YES" : "NO") << endl;
    }
}