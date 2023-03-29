#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n;
map<int,int> dp[100000];
map<int,int> :: iterator it1, it2;


void Add(int temp, int x, int y){
    it1 = dp[temp].lower_bound(x);
    it2 = it1;
    while(it2 != dp[temp].end() && it2->second  >= y)it2++;
    dp[temp].erase(it1, it2);
    dp[temp].insert({x, y});
}

bool check(int temp, int x, int y){
    it1 = dp[temp].lower_bound(x);
    if(it1 == dp[temp].begin())return false;
    it1--;
    return it1->second < y;
}

int main(){
    quick();
    cin >> n;
    Add(0, INT_MIN, INT_MIN);
    int res = 0;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        int l = 0, r = res;
        while(l <= r){
            int m = (l + r) / 2;
            if(check(m, x, y)) l = m + 1;
            else r = m - 1;
        }
        if(res == l - 1)res = l;
        Add(l, x, y);
    }
    cout << res << endl;
}
/*

*/