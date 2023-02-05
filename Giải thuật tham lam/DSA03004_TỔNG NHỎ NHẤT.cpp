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
        for(int &x : a) cin >> x;
        sort(a, a + n);
        ll s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2)
                s2 = s2 * 10 + a[i];
            else
                s1 = s1 * 10 + a[i];
        }
        cout << s1 + s2 << endl;
    }
}
/*

*/