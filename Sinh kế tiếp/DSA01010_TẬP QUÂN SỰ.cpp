#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	quick();
	int test; cin >> test;
    while(test--){
        int n, k; cin >> n >> k;
        int X[k + 1], Y[k + 1];
        for(int i = 1; i <= k; i++){
            cin >> X[i];
            Y[i] = X[i];
        }
        int i = k;
        while(i > 0 && X[i] == n - k + i)i--;
        if(!i){
            cout << k << endl;
        }else{
            X[i]++;
            for(int j = i + 1; j <= k; j++)
                X[j] = X[j - 1] + 1;
            int count = 0;
            for(int l = 1; l <= k; l++){
                int temp = 0;
                for(int j = 1; j <= k; j++){
                    if(Y[l] == X[j])
                        temp++;
                }
                if(!temp)count++;
            }
            if(!i)cout << k;
            else
                cout << count;
            cout << endl;
        }
    }
}
/*

*/