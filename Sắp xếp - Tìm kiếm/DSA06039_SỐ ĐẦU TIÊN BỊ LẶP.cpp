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
        int a[n], kt = 0;
        map<int,int> mp;
        for(int &x : a){
            cin >> x;
            mp[x]++;
        }
        for(int i = 0; i < n; i++){
            if(mp[a[i]] > 1){
                cout << a[i] << endl;
                kt = 1;
                break;
            }
        }
        if(!kt)cout << "NO\n";
    }
}
/*

*/