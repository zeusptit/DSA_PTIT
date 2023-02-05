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
        string s; cin >> s;
        int d[256] = {0};
        for(char x : s)d[x]++;
        int cnt = 0;
        for(int x : s)cnt = max(cnt, d[x]);
        if(s.length() % n == 0){
            if(cnt > s.length() / n) cout << -1 << endl;
            else cout << 1 << endl;
        }else{
            if(cnt > s.length() / n + 1) cout << - 1 << endl;
            else cout << 1 << endl;
        }
    }
}
/*

*/