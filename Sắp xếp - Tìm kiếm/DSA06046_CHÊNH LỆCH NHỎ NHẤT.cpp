#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1e9 + 7;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n], min_dist = INT_MAX;
		for(int &x : a)cin >> x;
		sort(a, a + n);
		for(int i = 1; i < n; i++){
			min_dist = min(min_dist, a[i] - a[i - 1]);
		}
		cout << min_dist << endl;
	}
}
/*

*/