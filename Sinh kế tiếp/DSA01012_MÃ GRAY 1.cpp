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
        vector<string> L1, L2;
        L1.pb("0");L1.pb("1");
        L2.pb("1");L2.pb("0");
        for(int i = 1; i <= n - 1; i++){
            for(string &x : L1)x = "0" + x;
            for(string &x : L2){
                x = "1" + x;
                L1.pb(x);
            }
            L2.clear();
            for(int i = L1.size() - 1; i >= 0; i--)L2.pb(L1[i]);
        }
        for(string x : L1)cout << x << ' ';
        cout << endl;
    }
}
/*

*/