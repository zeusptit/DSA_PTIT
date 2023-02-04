#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll solve(string s){
    ll temp = 0;
    for(auto x : s)
        temp = temp * 2 + (x - '0');
    return temp;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s, t; cin >> s >> t;
        cout << 1ll * solve(s) * solve(t) << endl;
    }
}
/*

*/