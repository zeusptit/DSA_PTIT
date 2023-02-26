#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, k, X[10000];
int ok;

void next(){
    int i = n - 1;
    while(i > 0 && X[i] > X[i + 1])i--;
    if(!i)ok = 0;
    else{
        int k = n;
        while(X[i] > X[k])k--;
        swap(X[i], X[k]);
        int l = i + 1, r = n;
        while(l <= r){
            swap(X[l++], X[r--]);
        }
    }
}

void out(){
    for(int i = 1; i <= n; i++)
        cout << X[i];
    cout << ' ';
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        for(int i = 1; i <= n; i++)X[i] = i;
        ok = 1;
        while(ok){
            out();
            next();
        }
        cout << endl;
    } 
}
/*

*/