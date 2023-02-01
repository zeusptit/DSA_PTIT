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
        int n, k; cin >> n >> k;
        ll res = 1;
        for(int i = n; i >= n - k + 1; i--){
            res *= i;
            res %= mod;
        }
        cout << res << endl;
    }
}
/*

*/