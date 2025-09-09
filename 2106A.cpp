#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int count = 0;
        for(int i=0;i<s.size();i++){
            count += (n-2)*(s[i]=='1')+1;
        }
        cout<<count<<endl;
    }
    return 0;
}