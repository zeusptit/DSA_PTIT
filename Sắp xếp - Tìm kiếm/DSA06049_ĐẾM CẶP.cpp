#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int search(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] < x){
            res = m;
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
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n - 1; i++){
            int temp = search(a, i + 1, n - 1, k + a[i]);
            if(temp != -1)
                cnt += temp - i;
        }
        cout << cnt << endl;
    }
}
/*

*/