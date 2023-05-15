#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
using pii = pair <int, int>;

int test, n, m, u, q, s, t;
int d[1001], V[1001][1001];

void floyd(){
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                V[i][j] = min(V[i][j], V[i][k] + V[k][j]);
            }
        }
    }
}

int main(){
    quick();
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            V[i][j] = 1e9;
        V[i][i] = 0;
    }
    for(int i = 1; i <= m; i++){
        int x, y, w; cin >> x >> y >> w;
        V[x][y] = V[y][x] = w;
    }
    floyd();
    cin >> q;
    while(q--){
        cin >> s >> t;
        cout << V[s][t] << endl;
    }
}
/*

*/