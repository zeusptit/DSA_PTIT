#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int n, k, s, cnt, X[100];

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + j <= s){
            X[i] = j;
            sum += j;
            if(sum == s && i == k)
                cnt++;
            else if(sum < s && i < k)
                Try(i + 1, j + 1, sum);
            sum -= j;
        }
    }
}

int main(){
    quick();
    while(1){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0)break;
        cnt = 0;
        Try(1, 1, 0);
        cout << cnt << endl;
    }
}
/*

*/