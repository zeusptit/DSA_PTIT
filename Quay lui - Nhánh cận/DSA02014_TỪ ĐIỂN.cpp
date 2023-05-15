#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

pair<int, int> p[] = {{0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}};
int test, k, m, n, visited[100][100];
set<string> se;
char a[100][100];
vector<string> res;

void Try(int i, int j, string temp){
    if(se.count(temp))res.pb(temp);
    for(int t = 0; t < 8; t++){
        int inew = p[t].first + i;
        int jnew = p[t].second + j;
        if(inew >= 0 && inew < m && jnew >= 0 && jnew < n && !visited[inew][jnew]){
            visited[inew][jnew] = 1;
            Try(inew, jnew, temp + a[inew][jnew]);
            visited[inew][jnew] = 0;
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        res.clear();
        se.clear();
        cin >> k >> m >> n;
        for(int i = 0; i < k; i++){
            string x; cin >> x;
            se.insert(x);
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                memset(visited, 0, sizeof(visited));
                visited[i][j] = 1;
                string s = "";
                Try(i, j, s + a[i][j]);
            }
        }
        if(!res.size())
            cout << -1 << endl;
        else{
            for(auto x : res)
                cout << x << ' ';
            cout << endl;
        }
    }
}
/*

*/