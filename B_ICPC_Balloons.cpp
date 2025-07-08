#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t; 
    cin >> t;
    while(t--){
        long n; 
        cin >> n;
        string s; 
        cin >> s;
        bool v[26] = {0};
        long total(0);
        for(long p = 0; p < s.size(); p++){
            int idx = s[p] - 'A';
            total += 2 - v[idx];
            v[idx] = 1;
        }
        cout << total << endl;
    }
}