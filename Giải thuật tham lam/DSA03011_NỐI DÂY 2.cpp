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
        int n; cin >> n ;
        int a[n];
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(int &x : a){
            cin >> x;
            q.push(x);
        }
        ll res = 0;
        while(q.size() > 1){
            ll t1 = q.top(); q.pop();
            ll t2 = q.top(); q.pop();
            res += (t1 % mod) + (t2 % mod) % mod;
            res %= (ll) mod;
            q.push(((t1 % mod) + (t2 % mod)) % mod);
        }
        cout << res << endl;
    }
}
/*

*/