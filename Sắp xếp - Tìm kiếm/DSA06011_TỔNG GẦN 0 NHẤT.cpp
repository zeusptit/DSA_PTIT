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
        int min_v = INT_MAX, res;
        for(int  i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(abs(a[i] + a[j]) < min_v){
                    min_v = abs(a[i] + a[j]);
                    res = a[i] + a[j];
                }
            }
        }
        cout << res << endl;
    }
}
/*

*/