#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test, n, m, visited[1001], ok;
vector<int> adj[1001];

void dfs(int u, int cnt){
    if(cnt == n)ok = 1;
    visited[u] = 1;
    for(auto x : adj[u]){
        if(!visited[x]){
            dfs(x, cnt + 1);
        }
    }
    visited[u] = 0;
}

int Hamilton(){
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        ok = 0;
        dfs(i, 1);
        if(ok)return 1;
    }
    return 0;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        ok = 0;
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        cout << Hamilton() << endl;
    }
}
/*

*/