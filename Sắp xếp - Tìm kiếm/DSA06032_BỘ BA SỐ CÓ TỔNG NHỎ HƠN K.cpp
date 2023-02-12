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
        ll a[n];
        for(ll &x : a)cin >> x;
        sort(a, a + n);
        ll res = 0;
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                res += lower_bound(a + 1 + j, a + n, k - a[i] - a[j]) - a - 1 - j;
            }
        }
        cout << res << endl;
    }
}
/*

*/