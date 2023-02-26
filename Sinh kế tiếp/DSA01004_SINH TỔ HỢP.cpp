#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, k, X[10000];
bool ok;

void next(){
    int i = k;
    while(i > 0 && X[i] == n - k + i)i--;
    if(!i)ok = false;
    else{
        X[i]++;
        for(int j = i + 1; j <= k; j++)
            X[j] = X[j - 1] + 1;
    }
}

void out(){
    for(int i = 1; i <= k; i++)
        cout << X[i];
    cout << ' ';
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++)X[i] = i;
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