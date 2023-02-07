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
        int a[n], d[3] = {0};
        for(int &x : a){
            cin >> x;
            d[x]++;
        }
        for(int i = 0; i <= 2; i++){
            for(int j = 1; j <= d[i]; j++){
                cout << i << ' ';
            }
        }
        cout << endl;
    }
}
/*

*/