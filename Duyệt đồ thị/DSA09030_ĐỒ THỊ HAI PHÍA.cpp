#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test;
int n, m, s, t, visited[1001], parent[1001], kt;
vector<int> adj[1001];

int bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(auto x : adj[top]){
            if(!visited[x]){
                visited[x] = 3 - visited[top];
                q.push(x);
            }
            else if(visited[x] == visited[top]) return 0;
        }
    }
    return 1;
}


int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        kt = 1;
        for(int i = 1; i <= n; i++){
            if(!visited[i] && !bfs(i)){
                kt = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if(kt)
            cout << "YES" << endl;
    }
}
/*

*/