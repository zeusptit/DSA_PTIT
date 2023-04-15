#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, m, test, u;
vector<int> adj[1001];
vector<pair<int, int>> edge;
int visited[1001];
int matrix[1001][1001];

int main(){
    quick();
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j]){
                adj[i].pb(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int x : adj[i])
            cout << x << ' ';
        cout << endl;
    }
}
/*

*/