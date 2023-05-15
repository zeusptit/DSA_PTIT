#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, a[10000], res, sum;

void Try(int pos, int s, int x, int cnt){
    if(cnt == k && pos == n){
        res++;
        return;
    }
    for(int j = pos; j < n; j++){
        s += a[j];
        if(s == x)
            Try(j + 1, 0, x, cnt + 1);
    }
}

int main(){
    quick();
    cin >> n >> k;
    sum = 0, res = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }   
    if(sum % k != 0){
        cout << 0;
        return 0;
    }
    Try(0, 0, sum / k, 0);
    cout << res;
}
/*

*/