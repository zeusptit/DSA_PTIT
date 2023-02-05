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
        sort(a, a + n);
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans += a[i] * i;
            ans %= mod;
        }
        cout << ans << endl;
    }
}
/*

*/