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
        int a[n];
        for(int &x : a)cin >> x;
        sort(a, a + n, greater<int> ());
        int ans = 0, l = 0, r = n / 2;
        while(l < n / 2 && r < n){
            if(a[l] >= a[r] * 2){
                ans++;
                l++;
                r++;
            }else{
                r++;
            }
        }
        cout << n - ans << endl;
    }
}
/*

*/