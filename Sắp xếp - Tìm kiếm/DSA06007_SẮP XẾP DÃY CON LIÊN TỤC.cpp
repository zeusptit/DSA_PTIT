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
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int i = 0, j = n - 1, l = 0, r = n;
        while(i < n){
            if(a[i] != b[i])
            {
                l = i;
                break;
            }
            i++;
        }
        while(j){
            if(a[j] != b[j])
            {
                r = j;
                break;
            }
            j--;
        }
        cout << l + 1 << ' ' << r + 1 << endl;
    }
}
/*

*/