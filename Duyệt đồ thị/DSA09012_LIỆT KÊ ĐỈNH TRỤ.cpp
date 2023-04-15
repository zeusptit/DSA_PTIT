#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test;
int n, m, s, t, visited[1001], parent[1001], cnt;
vector<int> adj[1001];

void dfs(int u){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}

int TPLT(){
    int res = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            res++;
        }
    }
    return res;
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
        int ans = TPLT();
        for(int i = 1; i <= n; i++){
            memset(visited, 0, sizeof(visited));
            int temp = 0;
            visited[i] = 1;
            for(int j = 1; j <= n; j++){
                if(!visited[j]){
                    temp++;
                    dfs(j);
                }
            }
            if(temp > ans)cout << i << ' ';
        }
        cout << endl;
    }
}
/*

*/