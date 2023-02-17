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
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		vector<ll> a(n);
		for(int i = 0; i < n; i++)cin >> a[i];
		sort(a.begin(), a.end());
		int kt = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				ll x = a[i] * a[i] + a[j] * a[j];
				ll tmp = sqrt(x);
				if(tmp * tmp == x && search(a, j + 1, n - 1, tmp) != -1){
					cout << "YES\n";
					kt = 1;
					break;
				}
			}
			if(kt)break;
		}
		if(!kt)cout << "NO\n";
	}
}
/*

*/