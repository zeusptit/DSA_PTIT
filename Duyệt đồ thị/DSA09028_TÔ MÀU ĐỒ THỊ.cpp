#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test;
int n, m, s, t, visited[1001], color[1001], cnt, v;
vector<int> adj[1001];

string bfs(){
    int maxColor = 1;
    fill(color, color + n + 1, 1);
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            queue<int> q; q.push(i);
            visited[i] = 1;
            while(!q.empty()){
                int top = q.front(); q.pop();
                for(int x : adj[top]){
                    if(color[x] == color[top])color[x]++;
                    maxColor = max({maxColor, color[top], color[x]});
                    if(maxColor > v)return "NO";
                    if(!visited[x]){
                        q.push(x);
                        visited[x] = 1;
                    }
                }
            }
        }
    }
    return "YES";
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 1; i <= 1000; i++)adj[i].clear();
        memset(visited, 0, sizeof(visited));
        cin >> n >> m >> v;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x - 1].pb(y - 1);
            adj[y - 1].pb(x - 1);
        }
        cout << bfs() << endl;
    }
}
/*

*/