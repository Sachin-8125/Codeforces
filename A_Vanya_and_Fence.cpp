#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>h){
            count+=2;
        }
        else{
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}