#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test;
int n, m, s, t, visited[1001], parent[1001];
vector<int> adj[1001];

void bfs(int u){
    queue<int> q; q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(int x : adj[top]){
            if(!visited[x]){
                q.push(top);
                q.push(x);
                parent[x] = top;
                visited[x] = 1;
            }
        }
    }
}

void path(int s, int t){
    bfs(s);
    if(!visited[t]){
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    while(s != t){
        ans.pb(t);
        t = parent[t];
    }
    ans.pb(s);
    reverse(ans.begin(), ans.end());
    for(int x : ans)cout << x << ' ';
    cout << endl;
}
int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        path(s, t);
    }
}
/*

*/