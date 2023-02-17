#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int search(vector<ll> a, int l, int r, ll x){
	if(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x)return m;
		else if(a[m] > x)return search(a, l, m - 1, x);
		else return search(a, m + 1, r, x);
	}else
		return -1;
}

int main(){
	quick();
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		vector<ll> a(n);
		int ans = 0; ll min_v = LLONG_MAX;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] < min_v){
				min_v = a[i];
				ans = i;
			}
		}
		cout << ans << endl;
	}
}
/*

*/