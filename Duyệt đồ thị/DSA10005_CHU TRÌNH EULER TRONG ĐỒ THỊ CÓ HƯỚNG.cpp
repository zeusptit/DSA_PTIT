#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test, u, s, t, cnt;
vector<int> adj[1001], udr_adj[1001];
vector<pair<int, int>> edge;
int visited[1001], deg_plus[1001], deg_dis[1001];

void dfs(int u){
    visited[u] = 1;
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
        cin >> n >> m;
        memset(deg_plus, 0, sizeof(deg_plus));
        memset(deg_dis, 0, sizeof(deg_dis));
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
            udr_adj[x].pb(y);
            deg_plus[x]++;
            deg_dis[y]++;
        }
        memset(visited, 0, sizeof(visited));
        dfs(1);
        int count_odd = 0, kt = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                cout << 0 << endl;
                kt = 1;
                break;
            }
        }
        int count = 0;
        if(!kt){
            for(int i = 1; i <= n; i++){
                if(deg_plus[i] == deg_dis[i])count++;
            }
            if(count == n)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}
/*

*/