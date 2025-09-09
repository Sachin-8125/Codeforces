#include <iostream>
using namespace std;
int main(){
    long t; cin >> t;
    while(t--){
        long n, m; 
        cin >> n >> m;
        string x; 
        cin >> x;
        string s; 
        cin >> s;
        int cnt(-1);
        for(long p = 0; p <= 6; p++){
            if(x.find(s) != string::npos){
                cnt = p; break;
            }
            x = x + x;
        }

        cout << cnt << endl;
    }

}