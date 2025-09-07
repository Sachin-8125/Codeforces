#include <iostream>
#include <vector>
using namespace std;
int main(){

    const int B = 26;
    ios_base::sync_with_stdio(false);
    long t; cin >> t;
    while(t--){
        long n; cin >> n;
        string s; cin >> s;

        vector<bool> v(B, 0);
        v[s[0] - 'a'] = 1;
        v[s.back() - 'a'] = 1;

        bool possible(false);
        for(long p = 1; !possible && p < s.size() - 1; p++){
            int x = s[p] - 'a';
            if(v[x]){possible = true;}
            v[x] = 1;
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}