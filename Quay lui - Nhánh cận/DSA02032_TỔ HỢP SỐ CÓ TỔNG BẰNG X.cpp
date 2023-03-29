#include <bits/stdc++.h>
using namespace std;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int n, x, a[200], X[200];
vector<string> v;

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        sum += a[j];
        X[i] = a[j];
        if(sum == x){
            string s = "{";
            for(int k = 1; k <= i; k++)s += to_string(X[k]) + " ";
            s.pop_back(); 
            s += "}";
            v.push_back(s);
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
        sort(a + 1, a + n + 1);
        v.clear();
        Try(1, 1, 0);
        if(v.size()){
            cout << v.size() << ' ';
            for(auto i : v){
                cout << i << ' ';
            }
            cout << endl;
        }else
            cout << -1 << endl;
    }
}
/*

*/