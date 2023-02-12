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
        int n, k; cin >> n >> k;
        int a[n];
        unordered_map<int,int> ump;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ump[a[i]] = i;
        }
        int kt = 0;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                int temp = k - (a[i] + a[j]);
                if(ump.count(temp) && ump[temp] > j){
                    cout << "YES\n";
                    kt = 1;
                    break;
                }
            }
            if(kt)break;
        }
        if(!kt)cout << "NO\n";
    }
}
/*

*/