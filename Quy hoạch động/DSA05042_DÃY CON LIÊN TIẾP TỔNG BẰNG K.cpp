#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int a[], int n, ll X){
    ll curPrefixSum = 0;
    unordered_map<ll, int> ump;
    for(int i = 0; i < n; i++){
        curPrefixSum += a[i];
        if(curPrefixSum == X)return 1;
        if(ump.count(curPrefixSum - X))
            return 1;
        ump[curPrefixSum] = i;
    }
    return 0;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; ll X;
        cin >> n >> X;
        int a[n];
        for(int &x : a)cin >> x;
        if(solve(a, n, X)) cout << "YES\n";
        else cout << "NO\n";
    }
}
/*

*/