#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		ll dp[n + 1] = {0}; dp[0] = 1;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= min(i, k); j++){
				dp[i] += dp[i - j];
				dp[i] %= mod;
			}
		}
		cout << dp[n] << endl;
	}
}
