#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int test, n, m, a[501][501];
pair<int, int> p[] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

struct edge{
    int x, y, w;
};

bool operator<(const edge& A, const edge& B) { 
    if (A.w == B.w) { 
        if (A.x == B.x) 
            return A.y < B.y; 
        else return A.x < B.x; 
    } 
    return A.w < B.w; 
}

int solve(){
    set<edge> se;
    int d[501][501];    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            d[i][j] = 1e9;
        }
    }
    d[0][0] = a[0][0];
    se.insert({0, 0, 0});
    while(se.size()){
        auto temp = *se.begin();
        se.erase(se.begin());
        for(int i = 0; i < 4; i++){
            int inew = p[i].first + temp.x;
            int jnew = p[i].second + temp.y;
            if(inew >= 0 && inew < n && jnew >= 0 && jnew < m){
                if(d[inew][jnew] > d[temp.x][temp.y] + a[inew][jnew]){
                    if(d[inew][jnew] != 1e9)
                        se.erase(se.find({inew, jnew, d[inew][jnew]}));
                    d[inew][jnew] = d[temp.x][temp.y] + a[inew][jnew];
                    se.insert({inew, jnew, d[inew][jnew]});
                }
            }
        }
    }
    return d[n - 1][m - 1];
}
int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cout << solve() << endl;
    }
}
/*

*/