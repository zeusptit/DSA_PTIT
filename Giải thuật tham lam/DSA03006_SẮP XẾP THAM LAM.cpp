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
        int n; cin >> n ;
        int a[n], b[n], kt = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for(int i = 0; i < n; i++){
            if(b[i] != a[i] && b[n - i - 1] != a[i]){
                cout << "No" << endl;
                kt = 1;
                break;
            }
        }
        if(!kt)cout << "Yes" << endl;
    }
}
/*

*/