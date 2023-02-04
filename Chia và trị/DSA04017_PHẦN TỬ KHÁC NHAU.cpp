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
        int a[n], b[n - 1];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        int i = 0;
        while(i < n){
            if(a[i] != b[i]){
                cout << i + 1 << endl;
                break;
            }
            i++;
        }
    }
}
/*

*/