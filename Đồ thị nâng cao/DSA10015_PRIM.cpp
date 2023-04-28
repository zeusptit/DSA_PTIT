#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
using P = pair<int, int>;
int mod = 1e9 + 7;

struct edge{
    int u, v, w;
};

int test, n, m, u;
int used[1001], parent[1001], d[1001];
vector<P> adj[1001];

void prim(int u){
    priority_queue<P, vector<P>, greater<P>> q;
    vector<edge> mst;
    int res = 0;
    q.push({0, u});
    while(!q.empty()){
        P top = q.top(); q.pop();
        int dinh = top.second, w = top.first;

        if(used[dinh])continue; 
        res += w;
        used[dinh] = 1;
        if(u != dinh){
            mst.pb({dinh, parent[dinh], w});
        }
        for(auto x : adj[dinh]){
            int y = x.first, wt = x.second;
            if(!used[y] && wt < d[y]){
                q.push({wt, y});
                d[y] = wt;
                parent[y] = dinh;
            }
        }
    }
    cout << res << endl;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        memset(parent, 0, sizeof(parent));
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y, w; cin >> x >> y >> w;
            adj[x].pb({y, w});
            adj[y].pb({x, w});
        }
        memset(used, 0, sizeof(used));
        for(int i = 1; i <= n; i++)d[i] = INT_MAX;
        prim(1);
    }
}
/*

*/