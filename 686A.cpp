#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    long long n , x , d ;
    char ch ;

    cin>>n>>x ;
    long long ans = x ;
    int cnt = 0 ;

    for(int i=0;i<n;i++){
        cin>>ch>>d ;
        if(ch == '+'){
            ans += d ;
        }else if(ch == '-'){
            if(ans >= d){
                ans -= d ;
            }else{
                cnt++;
            }
        }
    }
    cout<<ans<<" "<<cnt<<endl;
    return 0;
}