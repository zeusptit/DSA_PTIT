#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] <= x){
            res = m + 1;
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return res;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n, X; cin >> n >> X;
        int a[n];
        for(int &x : a)cin >> x;
        cout << solve(a, n, X) << endl;
    }
}
/*

*/