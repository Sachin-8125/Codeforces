#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> res;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int i=0,j=0;
        while(i<n and j<m){
            if(a[i]==b[j])i++;
            j++;
        }
        res.push_back(i);
    }
    for(int ele: res){
        cout<<ele<<endl;
    }
}