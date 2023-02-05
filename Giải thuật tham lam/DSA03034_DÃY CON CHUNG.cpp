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
        int a[n], b[m], c[p];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < p; i++) cin >> c[i];
        int check = 0, i = 0, j = 0, k = 0;
        while(i < n && j < m && k < p){
            if(a[i] == b[j] && b[j] == c[k]){
                cout << a[i] << ' ';
                check = 1;
                i++;
                j++;
                k++;
            }
            else if(a[i] < b[j] || a[i] < c[k])i++;
            else if(b[j] < a[i] || b[j] < c[k])j++;
            else if(c[k] < a[i] || c[k] < b[j])k++;
        }
        if(!check)cout << "NO";
        cout << endl;
    }
}
/*

*/