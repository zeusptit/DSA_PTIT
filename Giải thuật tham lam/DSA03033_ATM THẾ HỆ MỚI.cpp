#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll M[] = {1000, 2000, 3000, 5000};
ll n;
int c, test;
vector<ll> X, Y;

void init(){
    int x = 0;
    while(x <= c){
        for(int i = 0; i < 4; i++){
            ll temp = M[i] * pow(10, x);
            X.pb(temp);
        }
        x++;
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> c;
        X.clear(); Y.clear();
        if(n % 1000)cout << 0 << endl;
        else{
            init();
            reverse(X.begin(), X.end());
            vector<pair<ll, ll>> vp1;
            ll cnt1 = 0;
            for(auto x : X){
                vp1.pb({x, n / x});
                cnt1 += n / x;
                n %= x;
            }
            ll cnt2 = 1, y = 1;
            for(int i = c; i >= 0; i--){
                vector<pair<ll, ll>> vp2;
                for(auto x : vp1){
                    if(to_string(x.first).length() - 4 == i)
                        vp2.pb(x);
                }
                ll a = pow(10, i);
                ll b = INT_MAX, c = INT_MAX;
                ll m = 5000 * a, n = 3000 * a, p = 1000 * a, q = 2000 * a;
                for(auto x : vp2){
                    if(x.first == m || x.first == p)b = min(b, x.second);
                }
                for(auto x : vp2){
                    if(x.first == n || x.first == p)c = min(c, x.second);
                }
                if(b + c >= 1)
                    cnt2 *= (b + c + 1);
            }
            cout << cnt1 << ' ' << cnt2 << endl;
        }
    }
}
/*

*/