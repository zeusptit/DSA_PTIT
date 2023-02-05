#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n], b[n] = {0}, res = 0;
    for(int &x : a)cin >> x;
    for(int i = 0; i < n; i++){
        b[a[i]] = b[a[i] - 1] + 1;
        res = max(res, b[a[i]]);
    }
    cout << n - res;
}
/*

*/