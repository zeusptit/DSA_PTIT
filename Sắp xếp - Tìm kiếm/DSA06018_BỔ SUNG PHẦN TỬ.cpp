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
        int a[n], min_v = INT_MAX, max_v = INT_MIN;
        set<int> se;
        for(int &x : a){
            cin >> x;
            min_v = min(min_v, x);
            max_v = max(max_v, x);
            se.insert(x);
        }
        cout << max_v - min_v + 1 - se.size() << endl;
    }
}
/*

*/