#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test, n, m, a[1001][1001], cnt;

pair<int, int> path[] = {{0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}};

void dfs(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int inew = path[k].first + i;
        int jnew = path[k].second + j;;
        if(inew >= 1 && inew <= n && jnew >= 1 && jnew <= m && a[inew][jnew]){
            dfs(inew, jnew);
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j]){
                    ++cnt;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
}
/*

*/