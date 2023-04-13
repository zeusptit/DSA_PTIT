#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        vector<int> v;
        for(char x : s)v.pb(x - '0');
        vector<int> res(v.size(), 0);
        res[0] = v[0];
        for(int i = 1; i < v.size(); i++){
            res[i] = v[i] ^ v[i - 1];
        }
        for(int x : res)cout << x;
        cout << endl;
    }
}
/*

*/