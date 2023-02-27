#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, thang[100], xuoi[100], nguoc[100], res, a[100][100];

void Try(int i, int sum){
    if(i == n + 1){
        res = max(sum, res);
        return;
    }
    for(int j = 1; j <= n; j++){
        if(!thang[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
            thang[j] = xuoi[i - j +  n] = nguoc[i + j - 1] = 1;
                Try(i + 1, sum + a[j][i]);
            thang[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        n = 8;
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        res = 0;
        Try(1, 0);      
        cout << res << endl;
    }
}
/*

*/