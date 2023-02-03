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
        vector<int> dp1(n, 1), dp2(n, 1);
        for(int i = 1; i < n; i++)if(a[i] > a[i - 1])dp1[i] += dp1[i - 1];
        for(int i = n - 2; i >= 0; i--)if(a[i] > a[i + 1])dp2[i] += dp2[i + 1];
        int res = 0;
        for(int i = 0; i < n; i++)res = max(res, dp1[i] + dp2[i] - 1);
        cout << res << endl;
    }
}
/*

*/