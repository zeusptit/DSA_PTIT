#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n, V; cin >> n >> V;
        int w[n + 1], v[n + 1];
        for(int i = 1; i <= n; i++) cin >> w[i];
        for(int i = 1; i <= n; i++) cin >> v[i];
        int dp[n + 1][V + 1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= V; j++){
                dp[i][j] = dp[i - 1][j];
                if(j >= w[i])
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
        cout << dp[n][V] << endl;
    }
}
/*
*/
