#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

string operator*(string a, int b){
    if(a == "0" || b == 0)return "0";
    int n = a.length(), k = 0;
    string c(n, '0');
    for(int i = n - 1; i >= 0; i--){
        int temp = (a[i] - '0') * b + k;
        c[i] = (temp % 10) + '0';
        k = temp / 10;
    }
    if(k) c = to_string(k) + c;
    return c;
}

string catalan(int n){
    vector<int> v;
    for(int i = n + 2; i <= 2 * n; i++)v.pb(i);
    for(int i = 2; i <= n; i++){
        int temp = i;
        for(int j = 0; j < v.size() && temp > 1; j++){
            int d = __gcd(v[j], temp);
            temp /= d;
            v[j] /= d;
        }
    }
    string res = "1";
    for(int i = 0; i < v.size(); i++)res = res * v[i];
        return res;
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        cout << catalan(n) << endl;
    }
}
/*

*/