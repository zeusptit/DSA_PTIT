#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, X[100], unused[100];

int solve(){
    for(int i = 2; i <= n; i++){
        if(abs(X[i] - X[i - 1]) == 1)
            return 0;
    }
    return 1;
}

void out(){
    for(int i = 1; i <= n; i++)cout << X[i];
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!unused[j]){
            X[i] = j;
            unused[j] = 1;
            if(i == n && solve())
                out();
            else
                Try(i + 1);
            unused[j] = 0;
        }
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        Try(1);
    }
}
/*

*/