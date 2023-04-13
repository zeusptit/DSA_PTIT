#include <bits/stdc++.h>
using namespace std;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int n, X[200];
vector<string> v;

void Try(int i, int pos, int sum){
    for(int j = pos; j >= 1; j--){
        sum += j;
        X[i] = j;
        if(sum == n){
            string s = "(";
            for(int k = 1; k <= i; k++) s += to_string(X[k]) + " ";
            s.pop_back(); s += ")";
            v.push_back(s);
        }else if(sum < n)
            Try(i + 1, j, sum);
        sum -= j;
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        v.clear();
        Try(1, n, 0);
        for(auto x : v){
            cout << x << ' ';
        }
        cout << endl;
    }
}
/*
*/