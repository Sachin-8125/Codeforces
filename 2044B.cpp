#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        reverse(s.begin(), s.end());
        for(size_t p = 0; p < s.size(); p++){
            if(s[p] == 'p'){s[p] = 'q';}
            else if(s[p] == 'q'){s[p] = 'p';}
        }
        cout << s << endl;
    }
}