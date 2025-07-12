#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=a+2*b;
    
        if(sum%2!=0){
            cout<< "NO"<<endl;
        }else{
            int h_sum=sum/2;
            if(h_sum%2==0 ||(h_sum%2!=0 && a>0)){
                cout<< "YES"<<endl;
            }else{
                cout<< "NO"<<endl;
            }
        }
    }
    
    return 0;
}