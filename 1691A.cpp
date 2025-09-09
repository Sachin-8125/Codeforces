#include <iostream> 
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        int even=0, odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]%2 ? odd++ : even++;
        }
        cout<<min(odd,even)<<endl;
    }
    return 0;
}