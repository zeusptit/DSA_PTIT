#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
//using T = tuple <int, int, int>;
using P = pair <int, int>;

int mod = 1e9 + 7, maxn = 1001;
int n, m, parent[1001], size[1001], test, ans;

struct T{
    int w, u, v;
    bool operator<(T const& other){
        return w < other.w;
    }
};

vector<T> edge;
vector<P> mst;

void make_set(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        size[i] = 1;
    }
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b)return false;
    if(size[a] < size[b])swap(a, b);
    parent[b] = a;
    size[a] += size[b];
    return true;
}

void kruskal(){
    sort(edge.begin(), edge.end());
    ans = 0;
    for(auto e : edge){
        if(Union(e.u, e.v)){
            ans += e.w;
            mst.pb({e.u, e.v});
        }
    }
    cout << ans << endl;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        edge.clear(); mst.clear();
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y, z; cin >> x >> y >> z;
            T e;
            e.u = x, e.v = y, e.w = z;
            edge.pb(e);           
        }
        make_set();
        kruskal();
    } 
}
/*

*/