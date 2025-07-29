#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int ans = INT_MAX;
    while(n--){
        cin>>x;
        ans = min(ans,abs(x));
    }
    cout<<ans<<endl;
}