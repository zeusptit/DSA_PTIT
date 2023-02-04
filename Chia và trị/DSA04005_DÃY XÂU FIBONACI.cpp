#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll fibo[94];

void init(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 93; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

char Find(ll n, ll k){
    if(n == 1)return 'A';
    if(n == 2)return 'B';
    if(k <= fibo[n - 2])
        return Find(n - 2, k);
    else
        return Find(n - 1, k - fibo[n - 2]);
}

int main(){
    quick();
    int test; cin >> test;
    init();
    while(test--){
        ll n, i; cin >> n >> i;
        cout << Find(n, i) << endl;
    }
}
/*

*/