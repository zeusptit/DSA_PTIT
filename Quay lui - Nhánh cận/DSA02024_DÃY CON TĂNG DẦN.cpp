#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[100], X[100];
vector<string> v;

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        X[i] = a[j];
        if(i >= 2 && X[i] > X[i - 1]){
            string temp = "";
            for(int k = 1; k <= i; k++) temp += to_string(X[k]) + " ";
            v.pb(temp);
            Try(i + 1, j + 1);
        }else if(X[i] > X[i - 1])
            Try(i + 1, j + 1);
    }
}

int main(){
    quick();
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> a[i];
    Try(1, 1);
    sort(v.begin(), v.end());
    for(auto x : v){
        cout << x << endl;
    }
}
/*

*/