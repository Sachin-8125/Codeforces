#include<iostream>
#include<sstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        stringstream ss(str);
        string word1, word2, word3;
        ss >> word1 >> word2 >> word3;
        cout << word1[0] << word2[0] << word3[0] << endl;
    }
}