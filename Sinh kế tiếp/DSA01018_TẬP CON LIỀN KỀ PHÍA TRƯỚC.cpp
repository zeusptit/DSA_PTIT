#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int test, n, k, X[1001];

void prev(){
    int i = k;
    while(i && X[i - 1] + 1 == X[i])i--;
    if(i){
        X[i]--;
        for(int j = i + 1; j <= k; j++)X[j] = n - k + j;
        for(int i = 1; i <= k; i++)cout << X[i] << ' ';
    }
    else
        for(int j = 1; j <= k; j++)cout << j + k - 1 << ' ';
}

int main(){
    quick();
    cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++)cin >> X[i];
        prev();
        cout << endl;
    }
}
/*

*/