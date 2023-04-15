#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test, n, m, visited[1001], ok;
vector<int> adj[1001];
string s, res;

void dfs(int u, int par, string s){
    if(ok)return;
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            dfs(x, u, s + " " + to_string(x));
        }
        else if(x != par && x == 1){
            ok = 1;
            res = s;
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= n; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(int i = 1; i <= n; i++)sort(adj[i].begin(), adj[i].end());
        ok = 0;
        dfs(1, 0, "1");
        if(!ok)
            cout << "NO\n";
        else
            cout << res << ' ' << 1 << endl;
    }
}
/*

*/