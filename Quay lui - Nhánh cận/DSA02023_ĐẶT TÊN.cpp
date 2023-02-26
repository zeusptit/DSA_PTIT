#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, X[100];
set<string> se;
vector<string> v;


void out(){
    for(int i = 1; i <= k; i++)
        cout << v[X[i] - 1] << ' ';
    cout << endl;
}

void Try(int i){
    for(int j = X[i - 1] + 1; j <= n; j++){
        X[i] = j;
        if(i == k){
            out();
        }else
            Try(i + 1);
    }
}

int main(){
    quick();
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        string x; cin >> x;
        se.insert(x);
    }
    n = se.size();
    for(string x : se)v.pb(x);
    X[0] = 0;
    Try(1);
}
/*

*/