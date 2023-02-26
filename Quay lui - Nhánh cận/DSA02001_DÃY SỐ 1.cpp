#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<vector<int>> v;
int n, a[100], X[100];

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        X[i] = a[j - 1] + a[j];
        if(j == n){
            n = i;
            for(int k = 1; k <= n; k++)a[k] = X[k];
            vector<int> temp(X + 1, X + i + 1);
            v.pb(temp);
            if(n > 1)
                Try(1, 2);
        }else
            Try(i + 1, j + 1);
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        v.clear();
        for(int i = 1; i <= n; i++)cin >> a[i];
        vector<int> temp(a + 1, a + n + 1);
        v.pb(temp);
        temp.clear();
        Try(1, 2);
        for(int i = 0; i < v.size(); i++){
            cout << '[';
            for(int j = 0; j < v[i].size(); j++)
                if(j != v[i].size() - 1)
                    cout << v[i][j] << ' ';
                else
                    cout << v[i][j] << "]\n";
        }
    }
}
/*

*/