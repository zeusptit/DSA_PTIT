#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n, min_val = 1e9;
    int s[2][100000 ];
    cin >> n;
    memset(s, 0, sizeof(s));
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        min_val = min(min_val, x);
        s[0][1]++;
        s[1][1] += x;
        for(int j = 2; j <= x; j++){
            if(x / j != x / (j - 1)){
                s[0][x / j]++;
                s[1][x / j] += j;
            }
        }
    }
    for(int i = min_val; i > 0; i--){
        if(s[0][i] == n){
            cout << s[1][i];
            break;
        }
    }
}
/*

*/