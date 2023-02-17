#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n], sum = 0, prefixSum = 0, kt = 0;
		for(int &x : a){
			cin >> x;
			sum += x;
		}
		for(int i = 0; i < n; i++){
			prefixSum += a[i];
			if(sum - prefixSum == prefixSum - a[i]){
				cout << i + 1<< endl;
				kt = 1;
				break;
			}
		}
		if(!kt)cout << -1 << endl;
	}
}
/*

*/