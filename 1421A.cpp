#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ll d = a ^ b;
        cout << d << endl;
    }
    return 0;
}