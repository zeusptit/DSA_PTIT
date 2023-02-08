#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int x, y, z, n; cin >> n >> x >> y >> z;
		int dp[n + 1] = {0};
		dp[1] = x;
		for(int i = 2; i <= n; i++){
			if(i % 2 == 0)
				dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
			else
				dp[i] = min({dp[i - 1] + x, dp[i / 2] + x + z, dp[i / 2 + 1] + z + y});
		}
		cout << dp[n] << endl;
	}
}
/*

*/
