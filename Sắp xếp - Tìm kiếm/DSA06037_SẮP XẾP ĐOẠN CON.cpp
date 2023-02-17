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
        int a[n], b[n], c[n];
        for(int &x : a) cin >> x ;
        b[0] = a[0], c[n - 1] = a[n - 1];
        for(int i = 1; i < n; i++)b[i] = max(b[i - 1], a[i]);
        for(int i = n - 2; i >= 0; i--)c[i] = min(c[i + 1], a[i]);
        int ans = 0;
        for(int i = 0; i < n - 1; i++){
            if(b[i] <= c[i + 1])
                ans++;
        }
        cout << ans << endl;
        for(int i = 0; i < n - 1; i++){
            if(b[i] <= c[i + 1])
                cout << i + 1 << ' ';
        }
        cout << endl;
    }
}
/*

*/