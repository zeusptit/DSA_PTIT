#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
using P = pair<int, int>;
int mod = 1e9 + 7;
int test;
int n, m, s, t, visited[1001], parent[1001], cnt, u;
vector<int> adj[1001];
vector<P> mst;

void dfs(int u){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            mst.pb({u, x});
            dfs(x);
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        mst.clear();
        cin >> n >> m >> u;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        dfs(u);
        if(mst.size() != n - 1){
            cout << -1 << endl;
        }else{
            for(auto x : mst){
                cout << x.first << ' ' << x.second << endl;
            }
        }
    }
}
/*
*/