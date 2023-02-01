#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int X[100], ok, n;
void init(){
    for(int i = 1; i <= n; i++)X[i] = 0;
}

void next(){
    int i = n;
    while(i > 0 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if(!i) ok = 0;
    else{
        X[i] = 1;
    }
}

void out(){
    for(int i = 1; i <= n; i++)
        cout << X[i] << ' ';
    cout << endl;
}

bool check(){
    int l = 1, r = n;
    while(l <= r){
        if(X[l++] != X[r--])
            return false;
    }
    return true;
}

int main(){
    quick();
    cin >> n;
    init();
    ok = 1;
    while(ok){
        if(check())
            out();
        next();
    }
}
/*

*/