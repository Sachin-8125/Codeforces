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
        string s;
        cin >> n >> s;
        long left=0, right=s.size() - 1;
        while((left < right) && (s[left] != s[right])){
            ++left; 
            --right;
        }
        cout << (right - left + 1) << endl;
    }
}