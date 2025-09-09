#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int maxx = INT_MIN,minx = INT_MAX;
        int x,y;
        for(int i=0;i<4;i++){
            cin>>x>>y;
            minx = min(minx,x);
            maxx = max(maxx,x);
        }
        int s = abs(maxx-minx);
        cout<<s*s<<endl;
    }
}
