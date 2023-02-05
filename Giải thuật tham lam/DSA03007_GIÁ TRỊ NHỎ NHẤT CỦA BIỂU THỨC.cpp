#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll solve(ll a[], ll b[], int n){
    sort(a, a + n);
    sort(b, b + n, greater<ll> ());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i] * b[i];
    }
    return ans;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        ll a[n], b[n];
        for(ll &x : a) cin >> x; 
        for(ll &x : b) cin >> x; 
        ll t1 = solve(a, b, n), t2 = solve(b, a, n);
        cout << min(t1, t2) << endl;
    }
}
/*

*/