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
        pair<int,int> p[n];
        for(int i = 0; i < n; i++)cin >> p[i].first >> p[i].second;
        int ans = 0;
        sort(p, p + n, [](pair<int,int> a, pair<int, int> b) -> bool{
            return a.first < b.first;
        });
        int dp[101] = {0};
        for(int i = 0; i < n; i++){
            dp[i] = 1;
            int temp = 0;
            for(int j = 0; j < i; j++)
                if(p[i].first > p[j].second)
                    temp = max(dp[j], temp);
            dp[i] += temp;
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
}
/*

*/