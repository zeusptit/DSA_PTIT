#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll n, test;
queue<string> q;
vector<string> v;

void init(){
    q.push("1");
    while(1){
        string top = q.front(); q.pop();
        if(top.size() > 18)break;
        v.pb(top);
        q.push(top + "0");
        q.push(top + "1");
    }
}

int main(){
    quick();
    cin >> test;
    init();
    while(test--){
        cin >> n;
        int cnt = 0;
        for(auto x : v){
            if(stoll(x) > n)break;
            cnt++;
        }
        cout << cnt << endl;
    }
}
/*

*/