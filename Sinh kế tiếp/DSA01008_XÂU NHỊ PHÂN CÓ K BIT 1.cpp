#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, X[100], ok;

void in(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++)X[i] = 0;
    ok = 1;
}

void next(){
    int i = n;
    while(i > 0 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if(!i) ok = 0;
    else X[i] = 1;
}

int check(){
    int sum = 0;
    for(int i = 1; i <= n; i++)sum += X[i];
    return sum == k;
}

void out(){
    if(check()){
        for(int i = 1; i <= n; i++)cout << X[i];
        cout << endl;
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        in();
        while(ok){
            out();
            next();
        }
    }
}
/*

*/