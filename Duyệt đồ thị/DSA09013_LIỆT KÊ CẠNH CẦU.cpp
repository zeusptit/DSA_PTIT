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

void reset(){
    memset(visited, 0, sizeof(visited));
    for(int i = 0; i <= 1000; i++)adj[i].clear();
}

void dfs(int u){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}

int TPLT(){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans++;
            dfs(i);
        }
    }
    return ans;
}

void cal(int canh, int res, vector<pair<int, int>> tmp){
    for(int i = 0; i < m; i++){
        if(i != canh){
            adj[tmp[i].first].pb(tmp[i].second);
            adj[tmp[i].second].pb(tmp[i].first);
        }
    }
    int dem = TPLT();
    if(dem > res)cout << edge[canh].first << ' ' << edge[canh].second << ' ';
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        edge.clear();
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y); 
            adj[y].pb(x);
            edge.pb({x, y});
        }
        memset(visited, 0, sizeof(visited));
        int ans = TPLT();
        for(int i = 0; i < m; i++){
            reset();
            cal(i, ans, edge);
        }
        cout << endl;
    }
}
/*

*/