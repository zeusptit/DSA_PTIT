#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int dp[n + 1][k + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= 9 && i <= k; i++) {
            dp[1][i] = 1;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                for (int l = 0; l <= 9 && l <= j; l++) {
                    dp[i][j] += dp[i - 1][j - l];
                    dp[i][j] %= mod;
                }
            }
        }
        cout << dp[n][k] << endl;
    }
}
/*

*/