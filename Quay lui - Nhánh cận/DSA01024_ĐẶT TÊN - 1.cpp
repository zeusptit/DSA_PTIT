#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n, k, X[100];
vector<string> v;

void init(){
    cin >> n >> k;
    set<string>se;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        se.insert(x);
    }
    n = se.size();
    v.push_back("-1");
    for(string x : se)v.push_back(x);
}

void out(){
    for(int i = 1; i <= k; i++)
        cout << v[X[i]] << ' ';
    cout << endl;
}

void Try(int i){
    for(int j = X[i - 1] + 1; j <= n; j++){
        X[i] = j;
        if(i == k)
            out();
        else
            Try(i + 1);
    }
}

int main(){
    quick();
    init();
    X[0] = 0;
    Try(1);
}
/*

*/