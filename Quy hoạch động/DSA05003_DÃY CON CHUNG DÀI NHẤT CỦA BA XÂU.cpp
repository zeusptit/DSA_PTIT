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
        int n, m, p; cin >> n >> m >> p;
        string s, t, v; cin >> s >> t >> v;
        int dp[n + 1][m + 1][p + 1];
        memset(dp, 0, sizeof(dp));
        s = "@" + s; t = "@" + t; v = "@" + v;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                for(int k = 0; k <= p; k++){
                    if(i == 0 || j == 0 || k == 0)
                        dp[i][j][k] = 0;
                    else if(s[i] == t[j] && t[j] == v[k])
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    else
                        dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
                }
            }
        }
        cout << dp[n][m][p] << endl;
    }
}
/*

*/