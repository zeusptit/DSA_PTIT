#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, res;

void Try(int n, int cnt){
    if(n == 1){
        res = min(res, cnt);
        return;
    }
    if(cnt < res && n % 2 == 0)Try(n / 2, cnt + 1);
    if(cnt < res && n % 3 == 0)Try(n / 3, cnt + 1);
    if(cnt < res)Try(n - 1, cnt + 1);
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        res = INT_MAX;
        Try(n, 0);
        cout << res << endl;
    }
}
/*

*/