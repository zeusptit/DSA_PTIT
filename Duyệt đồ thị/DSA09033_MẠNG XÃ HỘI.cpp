#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test, n, m, ans, cnt, kt;
vector<int> adj[100001];
int visited[100001];

void dfs(int u){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            //adj[y].pb(x);
        }
        for(int i = 1; i <= n; i++)sort(adj[i].begin(), adj[i].end());
        dfs(1);
        kt = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                cout << "NO\n";
                kt = 1;
                break;
            }
        }
        if(!kt)cout << "YES\n";
    }
}
/*

*/