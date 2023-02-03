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
    if(b % 2 == 0)
        return powMod(a * a % mod, b / 2) % mod;
    else return a * powMod(a * a % mod,b / 2) % mod;
}

int main(){
    quick();
    while(1){
        ll a, b; cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }else{
            cout << powMod(a, b) << endl;
        }
    }
}
/*

*/