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
        int k; string s;
        cin >> k >> s;
        map<char, int> mp;
        for(char x : s)mp[x]++;
        priority_queue<int> q;
        for(auto x : mp)q.push(x.second);
        while(k--){
            int top = q.top(); q.pop();
            top--;
            q.push(max(top, 0));
        }
        ll res = 0;
        while(!q.empty()){
            res += 1ll * q.top() * q.top();
            q.pop();
        }
        cout << res << endl;
    }
}
/*

*/