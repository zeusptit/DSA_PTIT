#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[1001], sum, check;

void Try(int pos, int k){
    if(check)return;
    for(int j = pos; j <= n; j++){
        if(check)return;
        if(k + a[j] == sum && !check){
            check = 1;
            cout << "YES\n";
            return;
        }else if(k + a[j] < sum)
            Try(j + 1, k + a[j]);
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        sum = 0; check = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2)
            cout << "NO\n";
        else{
            sum /= 2;
            Try(1, 0);
        }
    }
}
/*

*/