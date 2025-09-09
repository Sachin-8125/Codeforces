#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int s = a+b+c;
        int count = 0;
        
        if(n>=s){
            int sets = n/s;
            count+= 3*sets;
            n -= sets*s;
        }
        if(n>0){
            n-=a;
            count++;
        }
        if(n>0){
            n-=b;
            count++;
        }
        if(n>0){
            n-=c;
            count++;
        }
        cout<<count<<endl;
    }
}