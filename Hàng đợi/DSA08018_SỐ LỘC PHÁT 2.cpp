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
        int n; cin >> n;
        queue<string> q;
        vector<string> v;
        q.push("6"); q.push("8");       
        while(1){
            string top = q.front(); q.pop();
            if(top.size() > n)break;
            v.pb(top);
            q.push(top + "6");
            q.push(top + "8");
        }
        cout << v.size() << endl;
        for(auto x : v)cout << x << ' ';
        cout << endl;
    }
}
/*

*/