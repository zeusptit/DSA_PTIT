#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
        int X[100];
        for(int i = 0; i < n; i++)cin >> X[i];
        int cnt = 1;
		while(prev_permutation(X, X + n)){
			cnt++;
		}
        cout << cnt << endl;
	}
    
}
/*

*/