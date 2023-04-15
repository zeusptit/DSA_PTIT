#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test, u, s, t;
vector<int> adj[1001];
vector<pair<int, int>> edge;
int visited[1001], parent[1001];

void dfs(int u){
    stack<int> st; st.push(u);
    visited[u] = 1;
    while(!st.empty()){
        int front = st.top(); st.pop();
        for(int x : adj[front]){
            if(!visited[x]){
                st.push(front);
                st.push(x);
                parent[x] = front;
                visited[x] = 1;
                break;
            }
        }
    }
}

void path(int s, int t){
    dfs(s);
    if(!visited[t]){
        cout << -1;
        return;
    }
    vector<int> ans;
    while(s != t){
        ans.pb(t);
        t = parent[t];
    }
    ans.pb(s);
    reverse(ans.begin(), ans.end());
    for(int x : ans)cout << x << ' ';
}

int main(){
    quick();
    cin >> test;
    while(test--){
        for(int i = 0; i <= 1000; i++)adj[i].clear();
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            //adj[y].pb(x);
        }
        memset(visited, 0, sizeof(visited));
        path(s, t);
        cout << endl;
    }
}
/*

*/