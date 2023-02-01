#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
	quick();
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		ll dp[n + 1] = {0};
		dp[0] = a[0], dp[1] = max(a[0], a[1]);
		for(int i = 2; i < n; i++){
			dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
		}
		cout << dp[n - 1] << endl;
	}
}