#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        set<int> st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        int l = st.size();
        cout<<((n-l)%2==0?l:l-1)<<endl;
    }
    return 0;
}