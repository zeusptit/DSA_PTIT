#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll powMod(ll a,ll b)
{
    if(b == 0)
        return 1;
    ll temp = powMod(a, b / 2);
    if(b % 2 == 0) return temp % mod * temp % mod;
    else return temp % mod * temp % mod * a % mod;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string n, r; cin >> n;
        r = n; 
        reverse(r.begin(), r.end());
        cout << powMod(stoll(n), stoll(r)) % mod << endl;;
    }
}
/*

*/