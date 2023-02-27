#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int prime[1005], test, n, p, s, X[1005], cnt;
vector<int> v;
vector<vector<int>> res;

void init(){
    prime[0] = prime[1] = 1;
    for(int i = 2; i * i <= s; i++){
        if(!prime[i])
        for(int j = 2 * i; j <= s; j += i){
            prime[j] = 1;
        }
    }
    for(int i = p + 1; i <= s; i++){
        if(!prime[i])
            v.pb(i);
    }
}

void Try(int i, int pos, int k, int sum){
    for(int j = pos; j < v.size(); j++){
        if(v[j] > p){
            sum += v[j];
            X[i] = v[j];
            k++;
            if(sum == s && k == n){
                cnt++;
                vector<int> temp(X, X + i + 1);
                res.pb(temp);
            }else if(sum < s && k < n)
                Try(i + 1, j + 1, k, sum);
            sum -= v[j];
            k--;
        }
    }
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> p >> s;
        v.clear();
        init();
        cnt = 0; res.clear();
        Try(0, 0, 0, 0);
        cout << cnt << endl;
        for(int i = 0; i < res.size(); i++){
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j] << ' ';
            }
            cout << endl;
        }
    }
}
/*

*/