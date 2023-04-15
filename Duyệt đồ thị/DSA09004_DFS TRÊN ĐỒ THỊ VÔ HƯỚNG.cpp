#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test, u;
vector<int> adj[1001];
vector<pair<int, int>> edge;
int visited[1001];

void dfs(int u){
    visited[u] = 1;
    cout << u << ' ';
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
        cin >> n >> m >> u;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        memset(visited, 0, sizeof(visited));
        dfs(u);
        cout << endl;
    }
}
/*

*/