#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, a[1001][1001], res, check[1001][1001], n, m;

struct T{
    int x, y, cnt;
};

void bfs(){
    queue<T> q;
    q.push({1, 1, 0});
    while(!q.empty()){
        T temp = q.front(); q.pop();
        if(temp.x == n && temp.y == m){
            res = min(res, temp.cnt);
            break;
        }
        if(temp.x > n || temp.y > m || temp.cnt > res)continue;
        if(!check[temp.x + a[temp.x][temp.y]][temp.y]){
            q.push({temp.x + a[temp.x][temp.y], temp.y, temp.cnt + 1});
            check[temp.x + a[temp.x][temp.y]][temp.y] = 1;
        }
        if(!check[temp.x][temp.y + a[temp.x][temp.y]]){
            q.push({temp.x, temp.y + a[temp.x][temp.y], temp.cnt + 1});
            check[temp.x][temp.y + a[temp.x][temp.y]] = 1;
        }
    }
    if(res == INT_MAX)
        cout << -1 << endl;
    else
        cout << res << endl;
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        memset(check, 0, sizeof(check));
        res = INT_MAX;
        check[1][1] = 1;
        bfs();
    }
}
/*

*/