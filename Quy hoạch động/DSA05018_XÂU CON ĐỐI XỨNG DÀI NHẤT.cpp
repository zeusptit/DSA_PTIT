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
        string s; cin >> s;
        int n = s.length();
        int dp[n + 1][n + 1], res = 1;
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++)dp[i][i] = 1;
        for(int len = 2; len <= n; len++){
            for(int i = 0; i <= n - len; i++){
                int j = i + len - 1;
                if(len == 2){
                    if(s[i] == s[j])
                        dp[i][j] = 1;
                    else
                        dp[i][j] = 0;
                }else
                    dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);

                if(dp[i][j])res = max(res, len);
            }
        }
        cout << res << endl;
    }
}
/*

*/