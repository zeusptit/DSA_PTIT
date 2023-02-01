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
        int a[n], v[n];
        for(int i = 1; i <= n; i++)cin >> a[i];
        for(int i = 1; i <= n; i++)cin >> v[i];
        int dp[1001][1001];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= V; j++){
                dp[i][j] = dp[i - 1][j];
                if(j >= a[i]){
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + v[i]);
                }
            }
        }
        cout << dp[n][V] << endl;
    }
}
/*

*/