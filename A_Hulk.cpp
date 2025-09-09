#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"I hate it";
        return 0;
    }
    for(int i=0; i<n-1; i++) {
        if(i%2==0) {
            cout<<"I hate that ";
        } else {
            cout<<"I love that ";
        }
    }
    if(n%2==0)cout<<"I love it";
    else cout<<"I hate it";
    return 0;
}