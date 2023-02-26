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
        string a = "A", b = "B";
        queue<string> q;
        q.push(a), q.push(b);
        vector<string> v;
        while(1){
            string top = q.front(); q.pop();
            if(top.size() > n)break;
            if(top.size() == n)
                v.push_back(top);
            q.push(top + a);
            q.push(top + b);
        }
        for(string x : v)cout << x << ' ';
        cout << endl;
    }
}
/*

*/