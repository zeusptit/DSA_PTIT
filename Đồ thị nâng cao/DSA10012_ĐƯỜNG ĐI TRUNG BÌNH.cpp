#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, n, m, cnt, res, visited[1001];
vector<int> adj[1001];

int BFS(int u, int v){
    visited[u] = 1;
    queue<pair<int, int>> q;
    q.push({u, 0});
    while(!q.empty()){
        auto temp = q.front(); q.pop();
        if(temp.first == v)return temp.second;
        for(auto x : adj[temp.first]){
            if(!visited[x]){
                q.push({x, temp.second + 1});
                visited[x] = 1;
            }
        }
    }
    return -1;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
        }
        res = 0, cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                memset(visited, 0, sizeof(visited));
                if(i != j){
                    int temp = BFS(i, j);
                    if(temp != -1){
                        res += temp;
                        cnt++;
                    }
                }
            }
        }
        cout << setprecision(2) << fixed << res * 1.0 / cnt << endl;
    }
}
/*

*/