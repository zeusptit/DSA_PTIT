#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, n, m, visited[1001][1001];
char a[1001][1001];
pair<int, int> u, v;
pair<int, int> p[] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
char drt[] = {'B', 'D', 'N', 'T'};
string res;

void dfs(int x, int y, int count, char c){
    visited[x][y] = 1;
    if(x == v.first && y == v.second && count <= 3){
        res = "YES";
        return;
    }
    if(count > 3 || a[x][y] == 'T'){
        visited[x][y] = 0;
        return;
    }
    for(int k = 0; k < 4; k++){
        int inew = p[k].first + x;
        int jnew = p[k].second + y;
        if(inew >= 1 && inew <= n && jnew >= 1 && jnew <= m && a[inew][jnew] != '*' && !visited[inew][jnew]){
            if(drt[k] != c)
                dfs(inew, jnew, count + 1, drt[k]);
            else 
                dfs(inew, jnew, count, drt[k]);
        }
    } 
    visited[x][y] = 0;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
                if(a[i][j] == 'S')u = {i, j};
                if(a[i][j] == 'T')v = {i, j};
            }
        }
        memset(visited, 0, sizeof(visited));
        res = "NO";
        dfs(u.first, u.second, 0, 'C');
        cout << res << endl;
    }
}
/*

*/ 