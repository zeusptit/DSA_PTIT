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
        int n; cin >> n ;
        vector<pair<int,int>> vp(n);
        for(int i = 0; i < n; i++)cin >> vp[i].first;
        for(int i = 0; i < n; i++)cin >> vp[i].second;
        sort(vp.begin(), vp.end(), [](pair<int,int> a, pair<int,int> b) -> bool{
            return a.second < b.second;
        });
        int kt = vp[0].second, res = 1;
        for(int i = 1; i < n; i++){
            if(vp[i].first >= kt){
                res++;
                kt = vp[i].second;
            }
        }
        cout << res << endl;
    }
}
/*

*/