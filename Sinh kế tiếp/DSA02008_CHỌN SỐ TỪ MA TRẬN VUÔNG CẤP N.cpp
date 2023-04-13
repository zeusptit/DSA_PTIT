#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, k, a[100][100], visited[100], X[100];
vector<vector<int>> v;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            X[i] = j;
            visited[j] = 1;
            if(i == n){
                int index = 1, temp = 0;
                for(int i = 1; i <= n; i++){
                    temp += a[i][X[index++]];
                }
                if(temp == k){
                    vector<int> res(X + 1, X + i + 1);
                    v.pb(res);
                }
            }else
                Try(i + 1);
            visited[j] = 0;
        }
    }
}


int main(){
    quick();
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << v.size() << endl;
    for(auto x : v){
        for(auto y : x){
            cout << y << ' ';
        }
        cout << endl;
    }
}
/*

*/