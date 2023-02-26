#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<vector<int>> v;
int n, k, a[100], X[100];

void Try(int i, int pos, int sum, int k){
    for(int j = pos; j <= n; j++){
        X[i] = a[j];
        sum += X[i];
        if(sum == k){
            vector<int> temp(X + 1, X + i + 1);
            v.pb(temp);
        }else if(sum < k)
            Try(i + 1, j + 1, sum, k);
        sum -= X[i];
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        v.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++)cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 1, 0, k);
        if(!v.size()){
            cout << -1 << endl;
        }else{
            for(int i = 0; i < v.size(); i++){
                cout << '[';
                for(int j = 0; j < v[i].size(); j++)
                    if(j != v[i].size() - 1)
                        cout << v[i][j] << ' ';
                    else
                        cout << v[i][j] << "] ";
            }
            cout << endl;
        }
    }
}
/*

*/