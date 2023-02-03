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
        if(s[0] == '0'){
            cout << 0 << endl;
            continue;
        }
        else{
            int dp[n + 1] = {0};
            dp[0] = 1;
            dp[1] = 1;
            for(int i = 2; i <= n; i++){
                if(s[i - 1] > '0')dp[i] = dp[i - 1];
                if(s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] <= '6')dp[i] += dp[i - 2];
            }
            cout << dp[n] << endl;
        }
    }
}
/*
*/
