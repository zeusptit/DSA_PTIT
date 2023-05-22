#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int x, int b[], int n, int Y[]){
    if(x == 0)return 0;
    if(x == 1)return Y[0];
    int *it = upper_bound(b, b + n, x);
    int a = (b + n) - it;
    a += (Y[0] + Y[1]);
    if(x == 2)
        a -= (Y[3] + Y[4]);
    if(x == 3)
        a += Y[2];
    return a;
}

int countPairs(int a[], int b[], int m, int n){
    int Y[5] = {0};
    for(int i = 0; i < n; i++)
        if(b[i] < 5)
            Y[b[i]]++;
    sort(b, b + n);
    int temp = 0;
    for(int i = 0; i < m; i++)
        temp += solve(a[i], b, n, Y);
    return temp;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int m, n; cin >> m >> n;
        int a[m], b[n];
        for(int &x : a)cin >> x;
        for(int &x : b)cin >> x;
        cout << countPairs(a, b, m, n) << endl;
    }
}
/*

*/