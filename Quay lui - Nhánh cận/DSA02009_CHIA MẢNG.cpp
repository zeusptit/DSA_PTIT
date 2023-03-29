#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, a[100], check, sum, unused[100];

void Try(int s, int cnt){
    if(cnt == k){
        check = 1;
        return;
    }
    for(int j = 1; j <= n; j++){
        if(!unused[j] && !check){
            if(check)return;
            s += a[j];
            unused[j] = 1;
            if(s == sum){
                Try(0, cnt + 1);
            }else if(s < sum)
                Try(s, cnt);
            s -= a[j];
            unused[j] = 0;
        }
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> k;
        sum = 0, check = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k)
            cout << 0 << endl;
        else{
            sum /= k;
            Try(0, 0);
            cout << check << endl;
        }
    }
}
/*

*/