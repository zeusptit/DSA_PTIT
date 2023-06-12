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
        vector<int> a(n), b(n, 1);
        for(int i = 0; i < n; i++)cin >> a[i];
        vector<int> res1, res2;
        res1.pb(-1);
        res2.pb(-1);
        for(int i = n - 1; i >= 0; i--){
            b[i] = 1;
            for(int j = i + 1; j < n;){
                if(a[j] >= a[i]){
                    b[i] += b[j];
                    j += b[j];
                    if(j >= n){
                        res1.pb(-1);
                        break;
                    }
                }
                else{
                    res1.pb(a[j]);
                    break;
                }
            }
        }
        for(int i = n - 1; i >= 0; i--){
            b[i] = 1;
            for(int j = i + 1; j < n;){
                if(a[j] <= a[i]){
                    b[i] += b[j];
                    j += b[j];
                    if(j >= n){
                        res2.pb(-1);
                        break;
                    }
                }
                else{
                    res2.pb(j);
                    break;
                }
            }
        }
        reverse(res1.begin(), res1.end());
        reverse(res2.begin(), res2.end());
        for(auto x : res2){
            if(x == -1 || res1[x] == -1)
                cout << -1 << ' ';
            else
                cout << res1[x] << ' ';
        }
        cout << endl;
    }
}
/*

*/