#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define P(x) pair<x, x>
using ll = long long;
int mod = 1e9 + 7;
int n, k, m, visited[1001][1001];
vector<int> adj[1001];
P(int) p[] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
set<P(P(int))> se;
vector<P(int)> pos;

void dfs(P(int) u){
    visited[u.first][u.second] = 1;
    for(int i = 0; i < 4; i++){
        int inew = p[i].first + u.first;
        int jnew = p[i].second + u.second;
        if(inew >= 1 && inew <= n && jnew >= 1 && jnew <= n && !visited[inew][jnew] && !se.count({u, {inew, jnew}}))
            dfs({inew, jnew});
    }
}

int main(){
    quick();
    cin >> n >> k >> m;
    for(int i = 1; i <= m; i++){
        int u, v, x, y;
        cin >> u >> v >> x >> y;
        se.insert({{u, v}, {x, y}});
        se.insert({{x, y}, {u, v}});
    }
    for(int i = 1; i <= k; i++){
        int a, b; cin >> a >> b;
        pos.pb({a, b});
    }
    int cnt = 0;
    for(auto x : pos){
        memset(visited, 0, sizeof(visited));
        dfs(x);
        for(auto y : pos)
            if(!visited[y.first][y.second])cnt++;
    }
    cout << cnt / 2 << endl;
}
/*

*/