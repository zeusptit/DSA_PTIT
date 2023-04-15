#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test, u, s, t, cnt;
vector<int> adj[1001];
vector<pair<int, int>> edge;
int visited[1001], deg[1001];

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
        memset(deg, 0, sizeof(deg));
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
            deg[x]++;
            deg[y]++;
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
            if(deg[i] % 2)count_odd++;
        }
        if(!kt){
            if(count_odd == 0)
                cout << 2 << endl;
            else if(count_odd == 2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}
/*

*/