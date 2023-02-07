#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n]; for(int &x : a)cin >> x;
    int k; cin >> k;
    for(int x : a)
        if(x != k)
            cout << x << ' ';
}
/*

*/