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
        int a[n], cnt = 0;
        for(int &x : a)cin >> x;
        for(int i = 0; i < n; i++){
            int min_v = i;
            for(int j = i + 1; j < n; j++)if(a[j] < a[min_v])min_v = j;
            if(a[i] != a[min_v]){
                swap(a[i], a[min_v]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
/*

*/