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

void bfs(int u){
    queue<int> q; q.push(u);
    visited[u] = 1;
    cout << u << ' ';
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(int x : adj[top]){
            if(!visited[x]){
                q.push(x);
                cout << x << ' ';
                visited[x] = 1;
            }
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
        bfs(u);
        cout << endl;
    }
}
/*

*/