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
        int n, m, p; cin >> n >> m >> p;
        ll a[n], b[m], c[p];
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        for(ll &x : c) cin >> x;
        int i = 0, j = 0, k = 0, kt = 0;
        while(i < n && j < m && k < p){
            if(a[i] == b[j] && b[j] == c[k]){
                cout << a[i] << ' ';
                kt = 1;
                i++; j++; k++;
            }
            else if(a[i] < b[j] || a[i] < c[k])i++;
            else if(b[j] < a[i] || b[j] < c[k])j++;
            else if(c[k] < a[i] || c[k] < b[j])k++;
        }
        if(!kt)cout << "-1";
        cout << endl;
    }
}
/*

*/