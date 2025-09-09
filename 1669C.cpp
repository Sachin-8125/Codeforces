#include<iostream>
using namespace std;
int main(){
	int t, n, a[52], b1, b2, i, flag;
	cin >> t;
	while (t--){
		flag = 0;
		cin >> n >> a[1] >> a[2];
		b1 = a[1] % 2;
		b2 = a[2] % 2;
		if (n > 2){
			for (i = 3; i <= n; i++){
				cin >> a[i];
				if (i % 2 == 1){
					if (a[i] % 2 != b1){
						flag = 1;
					}
				}else{
					if (a[i] % 2 != b2){
						flag = 1;
					}
				}
			}
		}
		if (flag == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
