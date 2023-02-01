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
        int a[n], dp1[n] = {0}, dp2[n] = {0};
        for(int &x : a) cin >> x;
        for(int i = 0 ; i < n; i++){
            dp1[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]){
                    dp1[i] = max(dp1[i], dp1[j] + a[i]);
                }
            }
        }
        for(int i = n - 1; i >= 0; i--){
            dp2[i] = a[i];
            for(int j = n - 1; j >= i; j--){
                if(a[j] < a[i]){
                    dp2[i] = max(dp2[i], dp2[j] + a[i]);
                }
            }
        }
        int ans = -1;
        for(int i = 0; i < n; i++)
            ans = max(ans, dp1[i] + dp2[i] - a[i]);
        cout << ans << endl;
    }
}
/*

*/