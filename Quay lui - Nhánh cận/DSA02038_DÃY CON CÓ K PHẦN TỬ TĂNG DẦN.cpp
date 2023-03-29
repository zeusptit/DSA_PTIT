#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, X[100], a[100];
vector<string> v;

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        X[i] = a[j];
        if(i == k){
            string temp = "";
            for(int l = 1; l <= i; l++)temp += to_string(X[l]) + " ";
            temp.pop_back();
            v.push_back(temp);
        }else
            Try(i + 1, j + 1);
    }
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        v.clear();
        Try(1, 1);
        for(string x : v)cout << x << endl;
    }
}
/*

*/