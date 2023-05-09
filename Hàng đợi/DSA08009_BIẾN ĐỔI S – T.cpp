#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
    int test; cin >> test;
    while(test--){
        ll s, t; cin >> s >> t;
        set<ll> se;
        queue<pair<ll, ll>> q;
        q.push({s, 0});
        se.insert(s);
        while(!q.empty()){
            pair<ll, ll> x = q.front(); q.pop();
            if(x.first - 1 == t|| x.first * 2 == t){
                cout << x.second + 1 << endl;
                break;
            }
            if(!se.count(x.first - 1) && x.first - 1 > 0){
                q.push({x.first - 1, x.second + 1});
                se.insert(x.first - 1);
            }
            if(!se.count(x.first * 2) && x.first < t){
                q.push({x.first * 2, x.second + 1});
                se.insert(x.first * 2);
            }
        }
    }
}
/*

*/