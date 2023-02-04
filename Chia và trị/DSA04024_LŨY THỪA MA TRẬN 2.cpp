#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct Matrix{
    ll M[11][11];
    int n;
    Matrix operator * (Matrix a){
        Matrix b;
        b.n = n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                b.M[i][j] = 0;
                for(int k = 0; k < n; k++){
                    b.M[i][j] += M[i][k] * a.M[k][j];
                    b.M[i][j] %= mod; 
                }
            }
        }
        return b;
    }
};

Matrix powMOD(Matrix a, ll n){
    if(n == 1)return a;
    Matrix temp = powMOD(a, n / 2);
    if(n % 2)
        return temp * temp * a;
    else
        return temp * temp;
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n, k; cin >> n >> k;
        Matrix a; a.n = n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a.M[i][j];
            }
        }
        Matrix ans = powMOD(a, k);
        ll res = 0;
        for(int i = 0; i < n; i++){
            res += ans.M[i][n - 1];
            res %= mod;
        }
        cout << res << endl;
    }
}
/*

*/