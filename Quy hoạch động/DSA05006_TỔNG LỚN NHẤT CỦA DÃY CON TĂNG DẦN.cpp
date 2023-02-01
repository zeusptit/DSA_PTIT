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
        int a[n];
        for(int &x : a) cin >> x;
        ll dp[n + 1] = {0}, res = -1;
        for(int i = 0; i < n; i++){
            dp[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]){
                    dp[i] = max(dp[i], dp[j] + a[i]);
                }
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
}
/*

*/