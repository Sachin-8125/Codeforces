#include<iostream>
#include<queue>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        priority_queue<int> pq;
        int n;
        cin>>n;
        int x;
        while(n--){
            cin>>x;
            pq.push(x);
        }
        while(pq.size()>1){
            int x = pq.top();pq.pop();
            int y = pq.top();pq.pop();
            pq.push(x+y-1);
        }
        cout<<pq.top()<<endl;
    }
}