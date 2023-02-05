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
        vector<pair<int,int>> vp(n);
        int x;
        for(int i = 0; i < n; i++){ 
            cin >> x >> vp[i].first >> vp[i].second;
        }
        sort(vp.begin(), vp.end(), [](pair<int,int> a, pair<int,int> b) -> bool{
            return a.second > b.second;
        });
        int cnt[100000] = {0};
        ll res = 0, ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = vp[i].first - 1; j >= 0; j--){
                if(!cnt[j]){
                    res += vp[i].second;
                    ans++;
                    cnt[j] = 1;
                    break;
                }
            }
        }
        cout << ans << ' ' <<  res << endl;
    }
}
/*

*/