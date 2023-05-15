#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, n, m, cnt, res, visited[1001], W[1001][1001];
vector<int> adj[1001];

int BFS(int u){
    visited[u] = 1;
    queue<pair<int, int>> q;
    q.push({u, 0});
    while(!q.empty()){
        auto temp = q.front(); q.pop();
        for(auto x : adj[temp.first]){
            if(!visited[x]){
                q.push({temp});
                q.push({x, temp.second + W[temp.first][x]});
                visited[x] = 1;
                break;
            }
            else if(x == u && temp.second + W[temp.first][x] < 0)return 1;
        }
    }
    return 0;
}

int solve(){
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        if(BFS(i))
            return 1;
    }
    return 0;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y, w; cin >> x >> y >> w;
            adj[x].pb(y);
            W[x][y] = w;
        }
        cout << solve() << endl;
    }
}
/*

*/