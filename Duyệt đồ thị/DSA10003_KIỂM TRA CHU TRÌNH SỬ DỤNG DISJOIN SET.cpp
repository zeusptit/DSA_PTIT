#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, n, m, root[1001];
vector<pair<int, int>> vp;

void init(){
    vp.clear();
    for(int i = 1; i <= n; i++)root[i] = i;
}

int find(int u){
    if(u == root[u])
        return u;
    root[u] = find(root[u]);
    return root[u];
}

int Union(vector<pair<int, int>> &vp){
    int rootU, rootV;
    for(auto &x : vp){
        rootU = find(x.first);
        rootV = find(x.second);
        if(rootU == rootV) return 1;
        root[rootU] = rootV;
    }
    return 0;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> m;
        init();
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            vp.pb({x, y});
        }
        if(Union(vp))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
/*

*/