#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
vector<ll> v;

void init(ll n){
    ll temp = (ll)log2(n);
    for(ll i = 0; i <= temp; i++)v.push_back((ll)pow(2, i));
}

ll find(ll n, ll pos, ll index){
    if(index >= 0){
        if(pos % 2 != 0)return 1;
        if(pos == v[index])return n % 2;
        if(pos < v[index])return find(n / 2, pos, index - 1);
        else return find(n / 2, pos - v[index], index - 1);
    }else
        return 0;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        v.clear();
        ll n, l ,r; cin >> n >> l >> r;
        ll ans = 0;
        init(n);
        ll x = v.size() - 1;
        for(ll i = l; i <= r; i++)ans += find(n, i, x);
        cout << ans << endl;
    }
}
/*

*/