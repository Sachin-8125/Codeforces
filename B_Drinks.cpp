#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    double sum = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum += x;
    }
    sum /= n;
    cout<<fixed<<setprecision(12)<<sum;
}