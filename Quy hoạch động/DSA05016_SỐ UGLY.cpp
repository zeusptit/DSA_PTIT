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
        int n; cin >> n;
        int dp[10000] = {0}, a = 0, b = 0, c = 0;
        dp[0] = 1;
        for(int i = 1; i < n; i++){
            dp[i] = min({dp[a] * 2, dp[b] * 3, dp[c] * 5});
            if(dp[i] == dp[a] * 2)a++;
            if(dp[i] == dp[b] * 3)b++;
            if(dp[i] == dp[c] * 5)c++;
        }
        cout << dp[n - 1] << endl;
    }
}
/*

*/