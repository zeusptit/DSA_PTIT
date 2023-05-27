#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test, n, x;
    cin >> test;
    while(test--){
        cin >> n;
        int a[10005] = {};
        vector<int> v;
        int ori = n;
        while(n--){
            cin >> x;
            if(!a[x])
                v.pb(x);
            a[x] = 1;
        }
        cout << (is_sorted(v.begin(), v.end()) && v.size() == ori) << endl;
    }
}
/*

*/