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
        int n, s; cin >> n >> s;
        int a[n];
        for(int &x : a) cin >> x;
        ll dp[s + 1] = {0}; 
        dp[0] = 1;
        for(int i = 1; i <= s; i++){
            for(int j = 0; j < n; j++){
                if(i >= a[j]){
                    dp[i] += dp[i - a[j]] % mod;
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[s] << endl;
    }
}
/*

*/