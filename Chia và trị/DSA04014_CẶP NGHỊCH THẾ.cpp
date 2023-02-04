#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll merge(int a[], int l, int m, int r){
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    ll ans = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] > y[j]){
            a[l++] = y[j++];
            ans += x.size() - i;
        }else{
            a[l++] = x[i++];
        }
    }
    while(i < x.size())a[l++] = x[i++];
    while(j < y.size())a[l++] = y[j++];
    return ans;
}

ll mergeSort(int a[], int l, int r){
    if(l < r){
        ll ans = 0;
        int m = (l + r) / 2;
        ans += mergeSort(a, l, m );
        ans += mergeSort(a, m + 1, r);
        ans += merge(a, l, m, r);
        return ans;
    }else
        return 0;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        cout << mergeSort(a, 0, n - 1) << endl;
    }
}
/*

*/