#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;

string solve(int n){
    queue<string> q;
    q.push("0"); q.push("9");
    while(1){
        string top = q.front(); q.pop();
        ll x = stoll(top);
        if(x % n == 0 && x)return top;
        q.push(top + "0");
        q.push(top + "9");
    }
    return "1";
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
}
/*

*/