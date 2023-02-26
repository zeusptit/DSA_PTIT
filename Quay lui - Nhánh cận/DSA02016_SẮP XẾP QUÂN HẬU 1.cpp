#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, thang[100], xuoi[100], nguoc[100], cnt, X[100];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!thang[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
            X[i] = j;
            thang[j] = xuoi[i - j +  n] = nguoc[i + j - 1] = 1;
            if(i == n)
                cnt++;
            else
                Try(i + 1);
            thang[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}
/*

*/