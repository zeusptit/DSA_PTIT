#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, x, a[100], X[100];
vector<string> v;

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        sum += a[j];
        X[i] = a[j];
        if(sum == x){
            string temp = "[";
            for(int k = 1; k <= i; k++)temp += to_string(X[k]) + " ";
            temp.pop_back();temp += "]";
            v.push_back(temp);
        }else if(sum < x)
            Try(i + 1, j, sum);
        sum -= a[j];
    }
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n >> x;
        for(int i = 1; i <= n; i++)cin >> a[i];
        v.clear();
        Try(1, 1, 0);
        if(v.size()){
            for(string i : v)cout << i;
            cout << endl;
        }else
            cout << -1 << endl;
    }
}
/*

*/