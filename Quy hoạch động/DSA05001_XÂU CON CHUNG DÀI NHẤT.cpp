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
        string s, t; cin >> s >> t;
        s = "!" + s; 
        t = "!" + t;
        int n = s.length(), m = t.length();
        int dp[n][m];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(s[i] == t[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << dp[n - 1][m - 1] << endl;
    }
}
/*

*/