#include <bits\stdc++.h>
using namespace std;
int main(){
    int t, length, x, sum = 0;
    cin >> t;
    while (t--){
        cin >> length;
        sum = 0;
        for (int i = 0; i < length; i++){
            cin >> x;
            sum += x;
        }
        cout<<(sum<length?1:sum-length)<<endl;
    }
    return 0;
}