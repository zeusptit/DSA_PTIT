#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll F[94];

void init(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 93; i++)
        F[i] = F[i - 1] + F[i - 2];
}

int Find(ll n, ll k){
    if(n == 1)return 0;
    if(n == 2)return 1;
    if(k <= F[n - 2])
        return Find(n - 2, k);
    else
        return Find(n - 1, k - F[n - 2]);
}

int main(){
    quick();
    int test; cin >> test;
    init();
    while(test--){
        ll n, k; cin >> n >> k;
        cout << Find(n, k) << endl;
    }    
}
/*

*/