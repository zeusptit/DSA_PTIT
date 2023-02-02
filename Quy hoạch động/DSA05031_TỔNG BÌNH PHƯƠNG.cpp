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
        int dp[n + 1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = i;
            for(int j =  1; j <= sqrt(i); j++){
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        cout << dp[n] << endl;
    }
}
/*

*/