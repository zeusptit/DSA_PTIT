#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, min_val = INT_MAX, visited[1001], X[1001];
vector<string> v;

int solve(string s, string t){
    int mp[256] = {0};
    for(char x : s)mp[x]++;
    int cnt = 0;
    for(char x : t)if(mp[x])cnt++;
    return cnt;
}

void Try(int dem, int sum, int k){
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            visited[j] = 1;
            if(dem == n)
                min_val = min(min_val, sum + solve(v[k], v[j]));
            else if(min_val > sum && dem < n)
                Try(dem + 1, sum + solve(v[k], v[j]), j);
            visited[j] = 0;
        }
    }
}

int main(){
    quick();
    cin >> n;
    v.pb("0");
    for(int i = 1; i <= n; i++){
        string x; cin >> x;
        v.pb(x);
    }
    Try(1, 0, 0);
    cout << min_val;
}
/*

*/