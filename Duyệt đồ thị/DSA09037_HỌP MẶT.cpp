#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int k, n, m, P[1001], visited[1001];
vector<int> adj[1001];

void dfs(int u){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x])
            dfs(x);
    }
}

int main(){
    quick();
    cin >> k >> n >> m;
    for(int i = 0; i < k; i++)cin >> P[i];
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        dfs(i);
        int temp = 0;
        for(int j = 0; j < k; j++)if(visited[P[j]])temp++;
        if(temp == k)cnt++;
    }
    cout << cnt << endl;
}
/*

*/