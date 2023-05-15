#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, n, m, res, visited[1001][1001];
vector<int> adj[1001];

void dfs(int u, int cnt){
    res = max(res, cnt);
    for(int x : adj[u]){
        if(!visited[u][x]){
            visited[u][x] = visited[x][u] = 1;
            dfs(x, cnt + 1);
            visited[u][x] = visited[x][u] = 0;
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        res = 1;
        for(int i = 0; i < n; i++){
            memset(visited, 0, sizeof(visited));
            dfs(i, 0);
        }
        cout << res << endl;
    }
}
/*

*/