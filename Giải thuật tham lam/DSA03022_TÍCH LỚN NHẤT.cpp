#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n];
    for(int  &x : a) cin >> x;
    sort(a, a + n);
    int res;
    if(n == 1){
        cout << a[0] * a[1] << endl;
        return 0;
    }else{
        res = max(res, a[n - 2] * a[n - 1]);
        res = max(res, a[0] * a[1]);
        res = max(res, a[n - 1] * a[n - 2] * a[n - 3]);
        res = max(res, a[0] * a[1] * a[n - 1]);
    }
    cout << res << endl;
}
/*

*/