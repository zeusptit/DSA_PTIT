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
        vector<ll> v(n), M(n + 1, INT_MIN);
        for(int i = 0; i < n; i++)cin >> v[i];
        for(int i = n - 1; i >= 0; i--)M[i] = max(M[i + 1], v[i]);
        int res = 0;
        for(int i = 0; i < n; i++){
            int left = i + 1, right = n - 1, ans = i;
            while(left <= right){
                int mid = (left + right) / 2;
                if(v[i] < M[mid]){
                    ans = max(ans, mid);
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
            res = max(res, ans - i);
        }
        if(res > 0)
            cout << res << endl;
        else
            cout << -1 << endl;
    }
}
/*

*/