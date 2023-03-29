#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, S, a[100], X[100], kt;

void Try(int i, int k){
    for(int j = X[i - 1] + 1; j <= n - k + i; j++){
        if(kt)return;
        X[i] = j;
        if(i == k){
            int sum = 0;
            for(int l = 1; l <= k; l++)sum += a[X[l]];
            if(sum == S){
                kt = 1;
                cout << k << endl;
                return;
            }
        }else 
            Try(i + 1, k);
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> S;
        for(int i = 1; i <= n; i++)cin >> a[i];
        sort(a + 1, a + n + 1, greater<int> ());
        X[0] = 0, kt = 0;
        for(int i = 1; i <= n; i++){
            Try(1, i);
            if(kt)break;
        }
        if(!kt)cout << -1 << endl;
    }
}
/*

*/