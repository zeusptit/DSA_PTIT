#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n;
vector<int> adj[200001];
vector<ll> M(200001, 0);
vector<ll> S(200001, 0);

ll DFS(int u) {
    ll res = 1;
    for (auto x : adj[u]) {
        res += DFS(x);
    }
    M[u] = res;
    return res;
}

ll DFS2(int u) {
    ll res = 1;
    for (auto x : adj[u]) {
        res += DFS2(x) + 1 + M[x] - 1;
    }
    S[u] = res;
    return res;
}

int main() {
    quick();
    cin >> n;
    for(int i = 2; i <= n; i++) {
        int u; cin >> u;
        adj[u].push_back(i);
    }
    DFS(1);
    DFS2(1);
    for(int i = 1; i <= n; i++)cout << S[i] << " ";
    cout << endl;
}
/*

*/