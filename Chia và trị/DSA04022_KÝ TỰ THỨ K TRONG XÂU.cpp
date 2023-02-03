#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

char Find(int n, ll k){
	if(k == pow(2, n - 1))return (char)(n + 64);
	if(k < pow(2, n - 1))
		return Find(n - 1, k);
	else
		return Find(n - 1, k - pow(2,n - 1));
}
int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; ll k; cin >> n >> k;
        cout << Find(n, k) << endl;
    }
}
/*
*/
