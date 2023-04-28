#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, cnt;
char a[1001][1001];

pair<int, int> path[] = {{0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}};

void dfs(int i, int j){
    a[i][j] = '.';
    for(int k = 0; k < 8; k++){
        int inew = path[k].first + i;
        int jnew = path[k].second + j;
        if(inew >= 0 && inew < n && jnew >= 0 && jnew < m && a[inew][jnew] == 'W'){
            dfs(inew, jnew);
        }
    }
}
int main(){
    quick();
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 'W'){
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}
/*

*/