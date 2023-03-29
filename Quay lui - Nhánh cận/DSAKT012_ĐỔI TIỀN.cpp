#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, s, a[100], check, res;

void Try(int i, int pos, int sum){
    if(check)return;
    for(int j = pos; j >= 0; j--){
        if(check)return;
        sum += a[j];
        i++;
        if(sum == s && !check){
            check = 1;
            res = min(res, i);
            return;
        }else if(sum < s)
            Try(i, j - 1, sum);
        sum -= a[j];
        i--;
    }
}

int main(){
    quick();
    cin >> n >> s;
    check = 0, res = INT_MAX;
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a, a + n);
    Try(0, n - 1, 0);
    if(res != INT_MAX)
        cout << res;
    else 
        cout << -1;
}
/*

*/