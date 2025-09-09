#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        string s;
        cin >> s;
        long a(0), b(0), c(0), d(0);
        for(long p = 0; p < s.size(); p++){
            a += (s[p] == 'A');
            b += (s[p] == 'B');
            c += (s[p] == 'C');
            d += (s[p] == 'D');
        }
        long cnt = (a < n ? a : n) + (b < n ? b : n) + (c < n ? c : n) + (d < n ? d : n);
        cout<<cnt<<endl;
    }
}
