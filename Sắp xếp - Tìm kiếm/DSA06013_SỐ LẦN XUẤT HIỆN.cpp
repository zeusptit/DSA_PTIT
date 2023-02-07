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
        int n, X; cin >> n >> X;
        int a[n];
        map<int,int> mp;
        for(int &x : a){
            cin >> x;
            mp[x]++;
        }
        if(mp.count(X))
            cout << mp[X] << endl;
        else
            cout << -1 << endl;
    }
}
/*

*/