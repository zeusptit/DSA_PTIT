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
        int n, s, m; cin >> n >> s >> m;
        if(n * (s - s / 7) < s * m){
            cout << - 1 << endl;
            continue;
        }else{
            int res = (s * m) / n;
            if(s * m % n)
                res++;
            cout << res << endl;
        }
    }
}
/*

*/