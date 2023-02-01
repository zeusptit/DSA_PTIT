#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int X[100], ok, n, k, a[100], cnt = 0;
void init(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        X[i] = 0;
    }
}

void next(){
    int i = n;
    while(i > 0 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if(!i)ok = 0;
    else{
        X[i] = 1;
    }
}

void out(){
    for(int i = 1; i <= n; i++)
        if(X[i])
            cout << a[i] << ' ';
    cout << endl;
}

bool check(){
    int sum = 0;
    for(int i = 1; i <= n; i++)
        if(X[i])
            sum += a[i];
    return sum == k;
}

int main(){
    quick();
    init();
    ok = 1;
    while(ok){
        if(check()){
            out();
            cnt++;
        }
        next();
    }
    cout << cnt;
}

/*

*/