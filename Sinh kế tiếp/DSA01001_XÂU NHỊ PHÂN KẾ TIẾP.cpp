#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

bool check(int a[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++)if(!a[i])cnt = 1;
    return cnt == 1;
}

void out(int a[], int n){
    for(int i = 0; i < n; i++)cout << a[i];
    cout << endl;
}

void next(int a[], int n){
    int i = n - 1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    a[i] = 1;
}

int main(){
    int test; cin >> test;
    while(test--){
        string s; cin >> s;
        int n = s.length(), a[n];
        for(int i = 0; i < n; i++)a[i] = s[i] - '0';
        if(!check(a, n)){
            string temp(n, '0');
            cout << temp << endl;
        }else{
            next(a, n);
            out(a, n);
        }
    }
}
