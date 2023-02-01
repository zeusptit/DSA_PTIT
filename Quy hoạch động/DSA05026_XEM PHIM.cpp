#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int C, n; cin >> C >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[C + 1] = {0};
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = C; j >= a[i]; j--){
            if(dp[j - a[i]])
                dp[j] = 1;
        }
    }
    for(int i = C; i >= 0; i--){
        if(dp[i]){
            cout << i;
            break;
        }
    }
}
/*

*/