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
        int n, k; cin >> n >> k;
        multiset<int> s;
        int a[n];
        for(int &x : a)cin >> x;
        for(int i = 0; i < k; i++)s.insert(a[i]);
        for(int i = 1; i <= n - k; i++){
            auto it = s.end();
            it--;
            cout << *it << ' ';
            auto x = s.find(a[i - 1]);
            s.erase(x);
            s.insert(a[i + k - 1]);
        }
        auto it = s.end(); it--;
        cout << *it << endl;
    }
}
/*

*/