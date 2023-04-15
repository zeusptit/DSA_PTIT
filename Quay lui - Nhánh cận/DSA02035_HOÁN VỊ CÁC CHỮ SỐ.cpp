#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, X[1001], visited[1001], res;

void Try(int i, vector<string> v){
    for(int j = 1; j <= k; j++){
        if(!visited[j]){
            X[i] = j;
            visited[j] = 1;
            if(i == k){
                int max_val = INT_MIN, min_val = INT_MAX;
                for(int m = 0; m < n; m++){
                    string temp = "";
                    for(int l = 1; l <= i; l++)temp += v[m][X[l] - 1];
                    int x = stoi(temp);
                    max_val = max(max_val, x);
                    min_val = min(min_val, x);
                }
                res = min(res, max_val - min_val);
            }else
                Try(i + 1, v);
            visited[j] = 0;
        }
    }
}

int main(){
    quick();
    cin >> n >> k;
    vector<string> v;
    for(int i = 1; i <= n; i++){
        string x; cin >> x;
        v.pb(x);
    };
    res = INT_MAX;
    Try(1, v);
    cout << res;
}
/*

*/