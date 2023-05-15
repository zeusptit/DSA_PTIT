#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
using pii = pair <int, int>;

int test, n, m, u;
vector <pii> adj[1001];
int d[1001];

void dijkstra(int s, int t) {
    for (int i = 1; i <= n; i++)
        d[i] = 1e9;
    d[s] = 0;
    priority_queue <pii, vector <pii>, greater <pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        auto x = q.top();
        q.pop();
        if (x.first != d[x.second])
            continue;
        for (auto temp : adj[x.second]) {
            if (d[x.second] + temp.first < d[temp.second]){
                d[temp.second] = d[x.second] + temp.first;
                q.push({d[temp.second], temp.second});
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
            int x, y, w; cin >> x >> y >> w;
            adj[x].pb({w, y});
            adj[y].pb({w, x});
        }
        for(int i = 1; i <= n; i++){
            dijkstra(u, i);
            cout << d[i] << ' ';
        }
        cout << endl;
    }
}
/*

*/