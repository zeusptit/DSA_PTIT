#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int a[100][100], cnt, n, m;

void Try(int i, int j){
    if(i == n && j == m){
        cnt++;
        return;
    }

    if(i + 1 <= n){
        Try(i + 1, j);
    }

    if(j + 1 <= m){
        Try(i, j + 1);
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        Try(1, 1);
        cout << cnt << endl;
    }
}
/*

*/