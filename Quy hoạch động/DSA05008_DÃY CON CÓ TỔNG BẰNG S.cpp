#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
	int test; cin >> test;
	while(test--){
		int n, s; cin >> n >> s;
		int a[n];
		for(int &x : a)cin >> x;
		int dp[s + 1] = {0};
		dp[0] = 1;
		for(int i = 0; i < n; i++){
			for(int j = s; j >= a[i]; j--){
				if(dp[j - a[i]])
					dp[j] = 1;
			}
		}
		if(dp[s]) cout << "YES\n";
		else cout << "NO\n";
	}
}