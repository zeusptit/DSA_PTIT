#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, X[100], ok;
vector<char> v;

void init(){
    v.clear();
    ok = 1;
    cin >> n >> k;
    v.pb('@');
    for(int i = 1; i <= n; i++){
        v.pb(i + 64);
        X[i] = i;
    }
}

void next(){
    int i = k;
    while(i > 0 && X[i] == n - k + i)i--;
    if(!i)ok = 0;
    else{
        X[i]++;
        for(int j = i + 1; j <= k; j++)
            X[j] = X[j - 1] + 1;
    }
}

void out(){
    for(int i = 1; i <= k; i++)
        cout << v[X[i]];
    cout << endl;
}


int main(){
    quick();
    int test; cin >> test;
    while(test--){
        init();
        while(ok){
            out();
            next();
        }
    }
}
/*

*/