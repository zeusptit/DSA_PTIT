#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test;
int n, m, s, t, visited[1001], parent[1001], cnt;
vector<int> adj[1001];

int dfs(int u, int par){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            if(dfs(x, u))return 1;
        }
        else if(x != par)return 1;
    }
    return 0;
}

int solve(int n){
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        if(dfs(i, 0))
            return 1;
    }
    return 0;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n;
        for(int i = 1; i < n; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        if(solve(n))
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
}
/*

*/