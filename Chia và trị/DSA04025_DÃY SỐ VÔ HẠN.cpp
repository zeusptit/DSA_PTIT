#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct Matrix{
    ll M[2][2];
    Matrix operator * (Matrix a){
        Matrix b;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                b.M[i][j] = 0;
                for(int k = 0; k < 2; k++){
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
        int n; cin >> n;
        Matrix a;
        a.M[0][0] = a.M[1][0] = a.M[0][1] = 1; a.M[1][1] = 0;
        Matrix ans = powMOD(a, n);
        cout << ans.M[1][0] << endl;
    }
}
/*

*/