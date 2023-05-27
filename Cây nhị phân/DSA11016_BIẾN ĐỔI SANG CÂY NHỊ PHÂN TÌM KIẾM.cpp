#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main() {
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        set<int> se;
        for(int i = 0; i < n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            se.insert(u);
            se.insert(v);
        }
        for (auto s : se)cout << s << ' ';
        cout << endl;
    }
}
/*

*/